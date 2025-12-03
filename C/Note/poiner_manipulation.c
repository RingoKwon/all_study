#include <stdio.h>

void pointer_arithmeris_exercise()
{
    int arr[5] = {1, 10, 100, 1000, 10000};
    int *p = arr;
    printf("Before p++ ---------------------\n");
    printf("arr[0] (same as p[0]): %d\n", arr[0]);
    printf("p (address of arr[0]): %p\n", (void *)p);
    printf("*p (p[0]): %d\n", *p);
    printf("p[1] (same as *(p + 1)): %d\n", p[1]);
    printf("*(p + 1): %d\n", *(p + 1));

    p++;  // move p to point to arr[1]

    printf("\nAfter p++ ----------------------\n");
    printf("p (now points to arr[1]): %p\n", (void *)p);
    printf("*p (p[0], now arr[1]): %d\n", *p);
    printf("p[1] (now arr[2]): %d\n", p[1]);
    printf("*(p + 1) (also arr[2]): %d\n", *(p + 1));
}

int main() {
    pointer_arithmeris_exercise();
    /*
    Before p++ ---------------------
    arr[0] (same as p[0]): 1
    p (address of arr[0]): 0x...
    *p (p[0]): 1
    p[1] (same as *(p + 1)): 10
    *(p + 1): 10

    After p++ ----------------------
    p (now points to arr[1]): 0x...
    *p (p[0], now arr[1]): 10
    p[1] (now arr[2]): 100
    *(p + 1) (also arr[2]): 100
    --------------------------------
    Conclusion:
    - p + 1 not change p address, it just change the value of p, same as p[1] not like p++ that change the address
    - p++ change p address, it just change the value of p, same as p[1] not like p + 1
    */

    return 0;
}