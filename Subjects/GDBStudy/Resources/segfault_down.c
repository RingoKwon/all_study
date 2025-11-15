// segfault.c
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    struct node* next;
    int data;
}node_t;

node_t* createListOfFive(){
    node_t* one = (node_t*)malloc(sizeof(node_t));
    node_t* two = (node_t*)malloc(sizeof(node_t));
    node_t* three = (node_t*)malloc(sizeof(node_t));
    node_t* four = (node_t*)malloc(sizeof(node_t));
    node_t* five = (node_t*)malloc(sizeof(node_t));

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = NULL;

    one->data = 1;
    two->data = 2;
    three->data = 3;
    four->data = 4;
    five->data = 5;

    return one;
}

void printList(node_t* start){
    node_t* iter = start;
    while(iter!=NULL){
        printf("%d\n",iter->data);
        iter=iter->next;
    }
}

int main(){

    node_t* temp = createListOfFive();
    printList(temp);

    return 0;
}
