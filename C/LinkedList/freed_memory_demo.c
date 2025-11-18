#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} Node;

int main()
{
    // Create a simple list: 1 -> 2 -> NULL
    Node* node1 = calloc(1, sizeof(Node));
    Node* node2 = calloc(1, sizeof(Node));

    node1->value = 1;
    node1->next = node2;

    node2->value = 2;
    node2->next = NULL;

    printf("=== BEFORE FREE ===\n");
    printf("node2 address:       %p\n", (void*)node2);
    printf("node2->value:        %d\n", node2->value);
    printf("node2->next:         %p (NULL)\n", (void*)node2->next);

    // Free node2
    printf("\n=== FREEING node2 ===\n");
    free(node2);
    printf("node2 has been freed!\n");

    // But we still have the pointer!
    printf("\n=== AFTER FREE (DANGEROUS!) ===\n");
    printf("node2 (pointer):     %p (still has the address!)\n", (void*)node2);

    // This is UNDEFINED BEHAVIOR but might "work"
    printf("\nTrying to read freed memory (UNDEFINED BEHAVIOR):\n");
    printf("node2->value:        %d (might work, might crash, might be garbage)\n", node2->value);
    printf("node2->next:         %p (might work, might crash, might be garbage)\n", (void*)node2->next);

    printf("\n=== WHY THIS IS DANGEROUS ===\n");
    printf("The memory at %p is now FREE.\n", (void*)node2);
    printf("The OS can reuse it at ANY TIME.\n");
    printf("Right now, it might still contain old data (value=2, next=NULL)\n");
    printf("But this is LUCK, not guaranteed!\n");

    printf("\n=== WHAT HAPPENS IN YOUR CODE ===\n");
    printf("1. You free a node (let's say at address 0x1000)\n");
    printf("2. outter_node still points to 0x1000 (freed memory)\n");
    printf("3. You do: outter_node->next\n");
    printf("4. GDB reads from 0x1000, might find old data (NULL)\n");
    printf("5. But this is UNDEFINED! Could crash any time!\n");

    printf("\n=== PROOF IT'S UNDEFINED ===\n");
    printf("Let me allocate new memory and see if it overwrites freed memory:\n");

    Node* node3 = calloc(1, sizeof(Node));
    node3->value = 999;
    node3->next = NULL;

    printf("\nAllocated node3 at:  %p\n", (void*)node3);
    printf("Now try reading freed node2->value again:\n");

    if (node3 == node2) {
        printf("OH NO! node3 got the SAME address as freed node2!\n");
        printf("node2->value is now: %d (was 2, now garbage!)\n", node2->value);
    } else {
        printf("node2->value:        %d (still readable by luck)\n", node2->value);
        printf("But could crash or change at any moment!\n");
    }

    printf("\n=== YOUR SPECIFIC CASE ===\n");
    printf("In GDB when you see:\n");
    printf("  (gdb) p outter_node\n");
    printf("  $10 = (Node *) 0xaaaaaaac1420  <- Points to freed memory\n");
    printf("  \n");
    printf("  (gdb) p outter_node->next\n");
    printf("  $11 = (struct node *) 0x0      <- Reads old value (NULL)\n");
    printf("\n");
    printf("This reads from FREED memory!\n");
    printf("It happens to show NULL because:\n");
    printf("1. The memory wasn't overwritten YET\n");
    printf("2. Old value (NULL) is still there\n");
    printf("3. But this is LUCK! Not safe!\n");

    printf("\n=== THE ACTUAL BUG ===\n");
    printf("Even if p outter_node->next shows NULL,\n");
    printf("you are reading from FREED memory.\n");
    printf("The crash might not happen immediately,\n");
    printf("but the watchpoint detected it:\n");
    printf("  'inner_node_previous->value: <unreadable>'\n");
    printf("This means the memory was freed!\n");

    free(node1);
    free(node3);
    // NOT freeing node2 again - already freed!

    return 0;
}
