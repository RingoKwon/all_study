#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int i;
    int j;

    // postfix increment
    i = 0;
    while (i < 2)
    {
        printf("i = %d\n", i);
        printf("i++ = %d\n", i++);
    }
    printf("i = %d\n", i);
    printf("--------------------------------\n");

    // prefix increment
    j = 0;
    while (j < 2)
    {
        printf("j = %d\n", j);
        printf("++j = %d\n", ++j);
        printf("j = %d\n", j);
    }
    printf("j = %d\n", j);
    printf("--------------------------------\n");
    // practical usage - postfix

    char *str;
    
    str = malloc(10);
    str = strcpy(str,"abc");
    while (*str)
    {
        printf("%c\n", *(str++));
    }
    printf("--------------------------------\n");
    
    // practical usage - prefix
    char *str2;
    
    str2 = malloc(10);
    str2 = strcpy(str2, "abc");
    while (*str2)
    {
        printf("%c\n", *str2);
        ++str2;  // prefix increment (same effect as str2++ here)
    }
    printf("--------------------------------\n");
    return 0;
}