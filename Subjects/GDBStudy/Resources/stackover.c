// stackoverglow

#include <stdio.h>

int main()
{
    int array[100000000000];
        array[ 99999999999] = 7;
    printf("%d\n", array[99999999999]) ;
    return (0);
}   
