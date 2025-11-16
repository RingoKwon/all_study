#include <stdio.h>
// test    
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
Node*   efficient_delete_match(Node* head, int delete_value, int* delete_count);
Node*   append(Node* head1, Node* head2);
Node*   reverse_list(Node* head);
void    sort_list(Node* head);
void    sort_list_solution(Node* head);
void    delete_duplicates(Node* head);

int main()
{
    Node*    list1_head;
    Node*    list2_head;

    list1_head = NULL;
    list2_head = NULL;
    list1_head = add_head(list1_head, 1);
    list1_head = add_head(list1_head, 2);
    list1_head = add_tail(list1_head, 3);
    list1_head = add_tail(list1_head, 3);
    list1_head = add_tail(list1_head, 7);

    list2_head = add_head(list2_head, 10);
    list2_head = add_head(list2_head, 20);
    list2_head = add_tail(list2_head, 30);
    list2_head = add_tail(list2_head, 30);
    list2_head = add_tail(list2_head, 70);
    
    printf("-----print list1-----\n");
    prt_linked_list(list1_head);
    printf("-----print list2-----\n");
    prt_linked_list(list2_head);
    printf("-----print append-----\n");
    append(list1_head, list2_head);
    prt_linked_list(list1_head);
    printf("-----print reverse-----\n");
    list1_head = reverse_list(list1_head);
    prt_linked_list(list1_head);
    printf("-----print sort-----\n");
    sort_list_solution(list1_head);
    prt_linked_list(list1_head);
    printf("-----print no duplicates-----\n");
    delete_duplicates(list1_head);
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
    Node* current;
    Node* temp;
    Node* new_head;
    
    *delete_count = 0;
    if (head == NULL)
        return (NULL);
    current = head;
    while (current->value == delete_value)
    {
        temp = current;
        current = current->next;
        (*delete_count)++;
        free(temp);
        if (current == NULL)
            return (NULL);
    }
    new_head = current;
    while (current->next != NULL)
    {
        if (current->next->value == delete_value)
        {
            temp = current->next;
            current->next = current->next->next;
            free(temp);
            (*delete_count)++;
        }
        else
            current = current->next;
    }
    return (new_head);
}
Node*   append(Node* head1, Node* head2)
{
    if (head1 == NULL)
        return (head2);
    Node* current = head1;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = head2;
    return (head1);
}

Node* reverse_list(Node* head)
{
    Node*   current;
    Node*   current_next;
    Node*   temp;

    if (head == NULL)
        return (NULL);
    if (head->next == NULL)
        return (head);
    current = head;
    current_next = head->next;
    current->next = NULL;
    while (current_next != NULL)
    {
        temp = current_next->next;
        current_next->next = current;
        current = current_next;
        current_next = temp;
    }
    return (current);
}

void    sort_list(Node* head)
{
    Node* current;
    int temp;
    int len;
    int i;

    if (head == NULL)
        return ;
    if (head->next == NULL)
        return ;
    len = length(head);
    i = 0;
    while (i < len)
    {
        current = head;
        while (current->next != NULL)
        {
            if (current->value > current->next->value)
            {
                temp = current->value;
                current->value = current->next->value;
                current->next->value = temp;
            }
            current = current->next;
        }
        i++;
    }
}

void    sort_list_solution(Node* head)
{
    bool    swaped;
    int     temp;
    Node*   current;

    if (head == NULL)
        return ;
    if (head->next == NULL)
        return ;
    do
    {
        swaped = false;
        current = head;
        while (current->next != NULL)
        {
            if (current->value > current->next->value)
            {
                temp = current->value;
                current->value = current->next->value;
                current->next->value = temp;
                swaped = true;
            }
            current = current->next;
        }
    }
    while (swaped);
}

void    delete_duplicates(Node* head)
{
    Node*   outter_node;
    Node*   inner_node;
    Node*   temp;

    outter_node = head;
    inner_node = head->next;
    if (head == NULL)
        return ;
    if (head->next == NULL)
        return ;
    while (outter_node->next != NULL)
    {
        while (inner_node->next!= NULL)//will it be completed? do while needed?
        {
            if (outter_node->value == inner_node->value)
            {
                temp = inner_node->next;
                inner_node->next = inner_node->next->next;
                free(temp);
            }
            inner_node = inner_node->next; 
        }
        outter_node = outter_node->next;
        inner_node = outter_node->next;
    }
}
