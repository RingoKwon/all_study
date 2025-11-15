#include <stdio.h>

int main(void)
{
    unsigned int    counter;

    counter = 0;
    for (int i = 0; i < 1000; i++)
    {
        if (i % 2 == 0)
        {
            counter++;
            printf("counter = %d\n", counter);
        }
    }
    return 0;
}

