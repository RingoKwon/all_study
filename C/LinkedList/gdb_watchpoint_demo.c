#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int value;
    struct node* next;
} Node;

int main()
{
    // Create a simple list: 1 -> 3 -> 3 -> 7
    Node* n1 = calloc(1, sizeof(Node));
    Node* n2 = calloc(1, sizeof(Node));
    Node* n3 = calloc(1, sizeof(Node));
    Node* n4 = calloc(1, sizeof(Node));

    n1->value = 1;
    n2->value = 3;  // First 3
    n3->value = 3;  // Second 3 (duplicate)
    n4->value = 7;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = NULL;

    printf("List created:\n");
    printf("n1 address: %p, value: %d\n", (void*)n1, n1->value);
    printf("n2 address: %p, value: %d\n", (void*)n2, n2->value);
    printf("n3 address: %p, value: %d\n", (void*)n3, n3->value);
    printf("n4 address: %p, value: %d\n", (void*)n4, n4->value);
    printf("\n");

    Node* inner_node = n2;  // Start at first 3

    printf("Step 1: inner_node points to n2 (first 3)\n");
    printf("  inner_node address: %p\n", (void*)inner_node);
    printf("  inner_node->value: %d\n", inner_node->value);
    printf("  SET WATCHPOINT HERE: watch inner_node->value\n");
    printf("  GDB watches memory at: %p\n\n", (void*)&(inner_node->value));

    // This is what happens in your code
    inner_node = inner_node->next;  // Move to second 3

    printf("Step 2: After inner_node = inner_node->next\n");
    printf("  inner_node NOW points to n3 (second 3)\n");
    printf("  inner_node address: %p\n", (void*)inner_node);
    printf("  inner_node->value: %d\n", inner_node->value);
    printf("  GDB NOW watches: %p\n", (void*)&(inner_node->value));
    printf("\n");
    printf("*** GDB WARNING ***\n");
    printf("Old value = 3 (at %p)\n", (void*)&(n2->value));
    printf("New value = 3 (at %p)\n", (void*)&(n3->value));
    printf("These are DIFFERENT memory locations!\n");
    printf("Both have value 3, but they're different nodes!\n\n");

    // Move again
    inner_node = inner_node->next;  // Move to 7

    printf("Step 3: After another inner_node = inner_node->next\n");
    printf("  inner_node NOW points to n4 (value 7)\n");
    printf("  inner_node address: %p\n", (void*)inner_node);
    printf("  inner_node->value: %d\n", inner_node->value);
    printf("\n");
    printf("*** GDB WARNING ***\n");
    printf("Old value = 3 (at %p)\n", (void*)&(n3->value));
    printf("New value = 7 (at %p)\n", (void*)&(n4->value));

    free(n1);
    free(n2);
    free(n3);
    free(n4);

    return 0;
}
