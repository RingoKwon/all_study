#include <stdio.h>
#include <stdlib.h>
 
// a node from a singly linked list
typedef struct node {
    struct node* next;
    int data;
}node_t;
 
// a singly linked list
typedef struct list {
    node_t* root;
}list_t;
 
 
void List_PrependNode(list_t* l, int value) {
    // handle NULL list case
    if (NULL==l) {
        return;
    }
    // handle empty list case
    if (l->root==NULL) {
        node_t* newnode = (node_t*)malloc(sizeof(node_t));
        newnode->next = NULL;
        newnode->data = value;
        l->root = newnode;
    } else {
        // handle any other case
        node_t* newnode = (node_t*)malloc(sizeof(node_t));
        newnode->next = l->root;
        newnode->data = value;
        l->root = newnode;
    }
}
 
// iterate through a list from start to finish
void List_Print(list_t* l) {
    node_t* iter = l->root;
    while(iter!=NULL) {
        printf("data: %d\n", iter->data);
        iter=iter->next;
    }
}
 
int main() {
    // creat a linked list on the stack and
    // initialize the root to NULL
    list_t l = {.root = NULL};
 
    for (int i = 0; i < 5; i++) {
        List_PrependNode(&l, i);
    }
 
    List_Print(&l);
 
    return 0;
}

