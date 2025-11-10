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
int count_matches(Node* head, int num);
void    replace_matches(Node* node, int from, int to);
Node*   delete_first_match(Node* head, int first_match, bool* is_deleted);
Node*   delete_all_match(Node* head, int match, int* count);
Node* efficient_delete_match(Node* head, int delete_value, int* delete_count);

int main()
{
    Node*    list1_head;
    int cnt;

    list1_head = NULL;
    list1_head = add_head(list1_head, 1);
    list1_head = add_head(list1_head, 2);
    list1_head = add_head(list1_head, 3);
    list1_head = add_head(list1_head, 3);
    list1_head = add_head(list1_head, 4);
    list1_head = add_head(list1_head, 4);
    list1_head = add_head(list1_head, 4);
    list1_head = add_tail(list1_head, 6);
    list1_head = add_tail(list1_head, 4);
    list1_head = add_tail(list1_head, 7);
    list1_head = add_tail(list1_head, 3);
    list1_head = add_tail(list1_head, 3);
    list1_head = add_tail(list1_head, 7);
    printf("-----print list-----\n");
    prt_linked_list(list1_head);
    printf("[delete_first_match]\n");
    bool is_deleted;
    list1_head = delete_first_match(list1_head, 5, &is_deleted); 
    prt_linked_list(list1_head);
    printf("is_deleted: %d\n", is_deleted);
    printf("-------------------------\n");
    list1_head = delete_first_match(list1_head, 7, &is_deleted);
    prt_linked_list(list1_head);
    printf("is_deleted: %d\n", is_deleted);
    list1_head = delete_all_match(list1_head, 7, &cnt);
    prt_linked_list(list1_head);
    printf("cnt: %d\n", cnt);
    list1_head = efficient_delete_match(list1_head, 3, &cnt);
    prt_linked_list(list1_head);
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

int count_matches(Node* head, int num)
{
    if (head->next == NULL)
        return (0);
    if (head->value == num)
        return (1 + count_matches(head->next, num));
    else
        return (0 + count_matches(head->next, num));
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

void    replace_matches(Node* node, int from, int to)
{
    if (node == NULL)
        return ;
    if (node->next == NULL)
        return ;
    if (node->value == from)
    {
        node->value = to;
    }
    replace_matches(node->next, from, to);
}

Node*   delete_first_match(Node* head, int first_match, bool* is_deleted)
{
    if (head == NULL)
    {
        *is_deleted = false;
        return (NULL);
    }

    Node* current = head->next;
    Node* previous = head;

    if (head->value == first_match)
    {
        current = head->next;
        free(head);
        *is_deleted = true;
        return (current);
    }
    while (current != NULL)
    {
        if (current->value == first_match)
        {
            previous->next = current->next;
            free(current);
            *is_deleted = true;
            return (head);
        }
        previous = current;
        current = current->next;
    }
    *is_deleted = false;
    return (head);
}

Node*   delete_all_match(Node* head, int match, int* count)
{
    Node* current;
    bool   is_deleted;

    current = head;
    is_deleted = false;
    *count = 0;
    do
    {
        current = delete_first_match(current, match, &is_deleted);
        if (is_deleted)
            (*count)++;
    }
    while (is_deleted);
    return (current);
}

Node* efficient_delete_match(Node* head, int delete_value, int* delete_count)
{
    Node*   new_head;
    Node*   previous;
    Node*   current;
    Node*   temp;

    *delete_count = 0;
    if (head == NULL)
        return NULL;
    new_head = head;
    if (new_head->value == delete_value)
    {
        new_head = head->next;
        free(head);
        while (new_head->value == delete_value)
        {
            previous = new_head;
            new_head = new_head->next;
            free(previous);
        }
    }
    current = new_head->next;
    previous = new_head;
    do
    {
        while (current->value == delete_value)
        {
            previous->next = current->next;
            temp = current;
            current = current->next;
            free(temp);
        }
        previous = current;
        current = current->next;
    }
    while (current->next != NULL);
    return (new_head);
}
