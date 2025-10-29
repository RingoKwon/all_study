// buggy1.c
#include <stdio.h>

int squarei(int n){
    return n*n;
}

int squaref(float n){
    return n*n;
}

int main(){

    for(float i=0; i < 1; i+=0.1){
         int x = squaref(i);
         printf("%d squared = %f\n",i,squaref(i));
    }
    
    return 0;
}
