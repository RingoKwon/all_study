#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} Node;

int main()
{
    // Create last node
    Node* last_node = calloc(1, sizeof(Node));
    last_node->value = 70;
    last_node->next = NULL;  // Explicitly set to NULL

    printf("=== Memory Layout ===\n");
    printf("last_node address:        %p  (VALID - points to real memory)\n", (void*)last_node);
    printf("last_node->value:         %d   (VALID - can read this)\n", last_node->value);
    printf("last_node->next:          %p  (NULL - points to NOTHING)\n", (void*)last_node->next);

    printf("\n=== What is NULL? ===\n");
    printf("NULL value in hex:        0x%lx\n", (unsigned long)NULL);
    printf("Is last_node->next NULL?  %s\n", last_node->next == NULL ? "YES" : "NO");

    printf("\n=== Valid vs Invalid Access ===\n");
    printf("✓ last_node->value:       %d (VALID - dereferencing valid pointer)\n", last_node->value);
    printf("✓ last_node->next:        %p (VALID - reading the pointer value itself)\n", (void*)last_node->next);

    printf("\n=== Comparing Addresses ===\n");
    printf("Address of last_node:     %p  ← This is valid memory\n", (void*)last_node);
    printf("Value of last_node->next: %p  ← This is NULL (0x0)\n", (void*)last_node->next);
    printf("\nNULL (0x0) is NOT a valid memory address!\n");
    printf("The OS reserves address 0x0 to catch NULL pointer errors.\n");

    printf("\n=== What Happens When You Dereference NULL ===\n");
    printf("If we try: last_node->next->value\n");
    printf("  Step 1: last_node->next = %p (NULL)\n", (void*)last_node->next);
    printf("  Step 2: Try to access memory at 0x0\n");
    printf("  Step 3: OS says NO! That's protected memory!\n");
    printf("  Step 4: SEGMENTATION FAULT\n");

    printf("\n=== Why Your Code Crashes ===\n");
    printf("Your code does:\n");
    printf("  while (outter_node->next != NULL)  // Loop condition\n");
    printf("\n");
    printf("When outter_node points to LAST node:\n");
    printf("  outter_node = %p (VALID)\n", (void*)last_node);
    printf("  outter_node->next = %p (NULL)\n", (void*)last_node->next);
    printf("  Loop condition is FALSE (next == NULL)\n");
    printf("  BUT... line 411 executes: inner_node = outter_node\n");
    printf("  Then line 400 checks: inner_node->next->next\n");
    printf("                         = NULL->next\n");
    printf("                         = Try to read from 0x0\n");
    printf("                         = CRASH!\n");

    printf("\n=== Try to Crash (commented out) ===\n");
    printf("// Uncommenting this will cause segfault:\n");
    printf("// int crash = last_node->next->value;\n");
    printf("//              └─ NULL ─┘\n");
    printf("//                └─ Try to access 0x0->value = CRASH!\n");

    // UNCOMMENT to see actual segfault:
    // printf("\nAttempting to dereference NULL...\n");
    // int crash = last_node->next->value;
    // printf("This line will never print: %d\n", crash);

    free(last_node);
    return 0;
}
