#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Note: We cast to (void *) for %p because:
    // 1. The C standard requires %p to receive a void* argument
    // 2. While char* might work on many systems, it's technically undefined behavior
    // 3. void* is the generic pointer type that can represent any pointer type
    // 4. This ensures portability and correctness across all platforms
    // Two strings (string literals)
    char *st1 = "abc";
    char *st2 = "xyz";

    // Array of char* (this is the double-pointer level)
    char **s_arr = malloc(sizeof(char *) * 3);
    if (!s_arr)
        return 1;

    // Store the string pointers inside the array
    s_arr[0] = st1;
    s_arr[1] = st2;
    s_arr[2] = NULL;   // optional end marker

    printf("=== Basic pointers ===\n");
    printf("st1         = %p -> \"%s\"\n", (void *)st1, st1);
    printf("st2         = %p -> \"%s\"\n", (void *)st2, st2);

    printf("\n=== s_arr (double pointer level) ===\n");
    printf("s_arr       = %p\n", (void *)s_arr);
    printf("&s_arr[0]   = %p  (s_arr == &s_arr[0])\n", (void *)&s_arr[0]);

    printf("\n=== s_arr[0] and pointer arithmetic ===\n");
    printf("s_arr[0]        = %p -> \"%s\"\n", (void *)s_arr[0], s_arr[0]);
    printf("*(s_arr + 0)    = %p -> \"%s\"\n", (void *)*(s_arr + 0), *(s_arr + 0));
    printf("*s_arr          = %p -> \"%s\"\n", (void *)*s_arr, *s_arr);

    printf("\n=== Dereferencing values ===\n");
    printf("s_arr[0][0]     = '%c'\n", s_arr[0][0]);   // first character of st1
    printf("**s_arr         = '%c'\n", **s_arr);       // same as above

    printf("\n=== Indexing example ===\n");
    printf("s_arr[1]        = %p -> \"%s\"\n", (void *)s_arr[1], s_arr[1]);
    printf("s_arr[1][2]     = '%c'\n", s_arr[1][2]);   // 'z'

    free(s_arr);
    return 0;
}

/*
 * EXPECTED OUTPUT:
 * ================
 * === Basic pointers ===
 * st1         = 0x10248c6c8 -> "abc"
 * st2         = 0x10248c6cc -> "xyz"
 *
 * === s_arr (double pointer level) ===
 * s_arr       = 0xba4c00900
 * &s_arr[0]   = 0xba4c00900  (s_arr == &s_arr[0])
 *
 * === s_arr[0] and pointer arithmetic ===
 * s_arr[0]        = 0x10248c6c8 -> "abc"
 * *(s_arr + 0)    = 0x10248c6c8 -> "abc"
 * *s_arr          = 0x10248c6c8 -> "abc"
 *
 * === Dereferencing values ===
 * s_arr[0][0]     = 'a'
 * **s_arr         = 'a'
 *
 * === Indexing example ===
 * s_arr[1]        = 0x10248c6cc -> "xyz"
 * s_arr[1][2]     = 'z'
 *
 * Note: Memory addresses will vary between runs, but the string values
 *       and character values shown above will remain consistent.
 */