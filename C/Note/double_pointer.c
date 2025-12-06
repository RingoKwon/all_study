#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Variable declarations (as shown in diagram)
    char **s_arr;
    char *str1;
    char *str2;

    // String literals: str1 = {'a','b','c'}, str2 = {'A','B','C'}
    str1 = "abc";
    str2 = "ABC";

    // Allocate array of char* pointers (double pointer level)
    s_arr = malloc(sizeof(char *) * 2);
    if (!s_arr)
        return 1;

    // Store string pointers in array: s_arr[0] = str1, s_arr[1] = str2
    s_arr[0] = str1;
    s_arr[1] = str2;

    // [**] Double Pointer Level - Array of Pointers
    printf("=== Double Pointer Level (s_arr) ===\n");
    printf("s_arr       = %p\n", (void *)s_arr);
    printf("&s_arr[0]   = %p  (s_arr == &s_arr[0])\n", (void *)&s_arr[0]);
    
    // Pointer arithmetic: s_arr[i] = *(s_arr + i)
    printf("\ns_arr[0]       = %p  (same as *(s_arr + 0))\n", (void *)s_arr[0]);
    printf("*(s_arr + 0)   = %p  (s_arr[i] = *(s_arr + i))\n", (void *)*(s_arr + 0));
    printf("&s_arr[1]      = %p  (same as s_arr + 1)\n", (void *)&s_arr[1]);
    printf("s_arr + 1      = %p  (&s_arr[i] = s_arr + i)\n", (void *)(s_arr + 1));

    // [*] Single Pointer Level - String Data
    printf("\n=== Single Pointer Level (str1) ===\n");
    printf("str1        = %p -> \"%s\"\n", (void *)str1, str1);
    printf("str1 + 0    = %p -> '%c'  (points to 'a')\n", (void *)(str1 + 0), *(str1 + 0));
    printf("str1 + 1    = %p -> '%c'  (points to 'b')\n", (void *)(str1 + 1), *(str1 + 1));
    printf("str1 + 2    = %p -> '%c'  (points to 'c')\n", (void *)(str1 + 2), *(str1 + 2));
    printf("str1 + 3    = %p -> '\\0'  (null terminator)\n", (void *)(str1 + 3));

    printf("\nstr2        = %p -> \"%s\"\n", (void *)str2, str2);

    // Dereferencing: *s_arr[0] and **s_arr
    printf("\n=== Dereferencing ===\n");
    printf("s_arr[0]    = %p -> \"%s\"\n", (void *)s_arr[0], s_arr[0]);
    printf("*s_arr[0]   = '%c'  (first char of str1)\n", *s_arr[0]);
    printf("**s_arr     = '%c'  (same as *s_arr[0])\n", **s_arr);

    free(s_arr);
    return 0;
}

/*
expected output:
================
=== double pointer level (s_arr) ===
s_arr       = 0x10344da80  (address of array)
&s_arr[0]   = 0x10344da80  (s_arr == &s_arr[0])

s_arr[0]       = 0x102dcc718  (same as *(s_arr + 0))
*(s_arr + 0)   = 0x102dcc718  (s_arr[i] = *(s_arr + i))
&s_arr[1]      = 0x10344da88  (same as s_arr + 1)
s_arr + 1      = 0x10344da88  (&s_arr[i] = s_arr + i)

=== single pointer level (str1) ===
str1        = 0x102dcc718 -> "abc"
str1 + 0    = 0x102dcc718 -> 'a'  (points to 'a')
str1 + 1    = 0x102dcc719 -> 'b'  (points to 'b')
str1 + 2    = 0x102dcc71a -> 'c'  (points to 'c')
str1 + 3    = 0x102dcc71b -> '\0'  (null terminator)

str2        = 0x102dcc71c -> "abc"

=== dereferencing ===
s_arr[0]    = 0x102dcc718 -> "abc"
*s_arr[0]   = 'a'  (first char of str1)
**s_arr     = 'a'  (same as *s_arr[0])

Note: Memory addresses will vary between runs, but the relationships
      between addresses (like str1+1 being one byte after str1) remain consistent.
 */