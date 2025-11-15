// stackoverglow

#include <stdio.h>

void    counter(int n)
{
    printf("%d\n", n);
    return (counter(1 + n));
}

int main()
{
    counter(0);
    return (0);
}   
