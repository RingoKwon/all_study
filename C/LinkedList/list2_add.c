#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int value;
    struct node* next;
} Node;

void    prt_linked_list(Node* node);
Node*   add_head(Node* head, int value);

int main()
{
    Node*    list1_head;

    list1_head = NULL;
    list1_head = add_head(list1_head, 1);
    list1_head = add_head(list1_head, 2);
    prt_linked_list(list1_head);
    return (0);
}

Node*   add_head(Node* head, int value)
{
    Node* new_head;

    new_head = calloc(1, sizeof(Node));
    new_head->value = value;
    if (head == NULL)
        return (new_head);
    new_head->next = head;
    return (new_head);
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
        current = current->next;
        i++;
    }
}
