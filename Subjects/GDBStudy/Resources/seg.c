// Always use -g to help the compiler
// insert extra information
//
// compile with: gcc -g seg.c -o prog
// Run with  :   ./prog
//
// Find error with: valgrind ./prog
// Debug with:   gdb ./prog --tui
#include <stdlib.h>
#include <stdio.h>

typedef struct data{
    char a;
    int b;
    double f;
}data_t;

void bar(){
    int* p = NULL;
    p = malloc(sizeof(int)*4);
    *p = 42; // expect seg fault here
    free(p);
}

void foo(){
    data_t* allocation = malloc(sizeof(data_t));
    free(allocation);
    bar();
}

int main(){
    printf("sizeof data_t=%lu\n",sizeof(data_t));
    foo();
    return 0;
}
