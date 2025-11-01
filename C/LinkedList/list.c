#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int value;
    struct node* next;
} Node;

void prt_linked_list(Node* node)
{
    printf("value: %d\n", node->value);
    if (node->next == NULL)
        return ;
    prt_linked_list(node->next);
}

int main()
{
    Node a, b, c;
    a.value = 1;
    b.value = 2;
    c.value = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    prt_linked_list(&a);
    return (0);
}
