#include <stdio.h>


void    setupArray(int* a, size_t size)
{
      for (size_t i = 0; i < size; i++)
      {
          a[i] = i;
      }
}

void    printArray(int* a, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}

int main(void)
{
    // created array rith 10;
    int a[10];
    setupArray(a, 10);
    printArray(a, 10);
    return (0);
}
