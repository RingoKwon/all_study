#include <stdio.h>

int main(void)
{
    int p = 42;

    int* px = &p;

    p = 32;

    printf("p is %d\n", p);

    *px = 57;
    printf("p is %d\n", p);
    return (0);
}
