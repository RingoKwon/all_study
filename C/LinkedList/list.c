#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int value;
    struct node* next;
} Node;

void    prt_linked_list_recursive(Node* node);
void    prt_linked_list(Node* node);

int main()
{
    Node a, b, c;
    a.value = 1;
    b.value = 2;
    c.value = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printf("recursive: \n");
    prt_linked_list_recursive(&a);
    printf("iterative: \n");
    prt_linked_list(&a);
    return (0);
}

void    prt_linked_list_recursive(Node* node)
{
    printf("value: %d\n", node->value);
    if (node->next == NULL)
        return ;
    prt_linked_list_recursive(node->next);
}

void    prt_linked_list(Node* node)
{
    Node*   current;
    int i;

    current = node;
    i = 0;
    while (current != NULL)
    {
        printf("Node %d: %d\n", i, current->value);
        current = node->next;
        i++;
    }
}
