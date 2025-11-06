#include <stdio.h>
#include <stdlib.h>

#include <unistd.h>

int main(){

    alarm(2);

    while(1){
        int* array = (int*)malloc(sizeof(int)*1);
    }

    return 0;
}
