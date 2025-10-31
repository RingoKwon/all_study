#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int value;
    struct node* next;
} Node;

int main()
{
    Node a, b, c;
    a.value = 1;
    b.value = 2;
    b.value = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printf("a.value: %d", a.value);
    return (0);
}
