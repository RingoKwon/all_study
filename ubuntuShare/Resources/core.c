// core.c
#include <stdio.h>

int main(){

    int* px = NULL;
    int array[10];

    for(int i=0; i < 100; i++){
        array[i] = i;
        *px = array[i];
    }

    printf("What is *px? %d\n",*px);

    return 0;
}
