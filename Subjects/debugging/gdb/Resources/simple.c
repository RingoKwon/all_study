// simple.c

#include <stdio.h>

int main(){

    int counter =0;
    for(int i=0; i < 1000; i++){
        if(i%2==0){
            counter=counter+1;
            printf("counter = %d\n",counter);
        }
    }

    return 0;
}
