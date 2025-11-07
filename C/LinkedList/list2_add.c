#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node 
{
    int value;
    struct node* next;
} Node;

void    prt_linked_list(Node* node);
Node*   add_head(Node* head, int value);
Node*   add_tail(Node* tail, int value);
Node*   delete_head(Node* head);
Node*   delete_tail(Node* head);
int length(Node* head);
int length_recursive(Node* head);
bool    is_member(Node* head, int num);
int count_member(Node* head, int num);

int main()
{
    Node*    list1_head;

    list1_head = NULL;
    list1_head = add_head(list1_head, 1);
    list1_head = add_head(list1_head, 2);
    list1_head = add_head(list1_head, 2);
    list1_head = add_head(list1_head, 2);
    list1_head = add_head(list1_head, 2);
    list1_head = add_tail(list1_head, 0);
    list1_head = add_tail(list1_head, 100);
    prt_linked_list(list1_head);
    printf("Length :%d\n", length(list1_head));
    printf("-----------------\n");
    list1_head = delete_head(list1_head);
    prt_linked_list(list1_head);
    printf("Length :%d\n", length(list1_head));
    printf("-----------------\n");
    list1_head = delete_tail(list1_head);
    prt_linked_list(list1_head);
    // length
    printf("-----------------\n");
    printf("Length :%d\n", length(list1_head));
    printf("Length :%d\n", length_recursive(list1_head));
    printf("-----------------\n");
    printf("have 2: %d\n", is_member(list1_head, 2));
    printf("-----------------\n");
    printf("count: %d", count_member(list1_head, 2));

    return (0);
}

Node*   delete_head(Node* head)
{
    Node*   current;
    if (head == NULL)
        return (NULL);
    current = head->next;
    free(head);
    return (current);
}

Node*   delete_tail(Node* head)
{
    Node* current;
    Node* previous;

    current = head;
    if (head == NULL)
        return (NULL);
    if (head->next == NULL)
    {
        free(head);
        return (NULL);
    }
    while (current->next != NULL)
    {
        previous = current;
        current = current->next;
    }
    free(current);
    previous->next = NULL;

    return (head);
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

Node*   add_tail(Node* head, int value)
{
    Node* tail;
    Node* current; 

    tail = calloc(1, sizeof(Node));
    tail->value = value;

    if (head == NULL)
        return (tail);

    current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = tail;
    return (head);
}

int length(Node* head)
{
    int i;
    Node* current;

    current = head;
    i = 0;
    while (current != NULL)
    {
        current = current->next;
        i++;
    }
    return (i);
}

int length_recursive(Node* head)
{
    if (head == NULL)
        return (0);
    return (1 + length_recursive(head->next));
}

bool    is_member(Node* head, int num)
{
    if (head == NULL)
        return (false);
    if (head->value == num)
    {
        return (true);
    }
    return (is_member(head->next, num));
}

int count_member(Node* head, int num)
{
    if (head->next == NULL)
        return (0);
    if (head->value == num)
        return (1 + count_member(head->next, num));
    else
        return (0 + count_member(head->next, num));
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
