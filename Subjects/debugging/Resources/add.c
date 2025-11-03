// add.c 
#include <stdio.h>
#include <math.h>

int add(int a, int b){
    return a+b;
}

int square(int x){
    return x*x;
}

int addAndSquare(int a, int b){
    return square(add(a,b));
}

int main(){

    for(int i=0; i < 6; i++){
        for(int j=0; j<6; j++){
            printf("addAndSquare(%d,%d)=%d\n",
                    i,j,addAndSquare(i,j));
        }
    }

    return 0;
}
