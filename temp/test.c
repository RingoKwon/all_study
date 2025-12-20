#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memset(void *b, int c, size_t len)
{
    size_t  i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char *)b; 
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

int main(void)
{
    char    *c1;

    /* allocate a buffer (3 chars + null) and initialize it */
    c1 = (char *)malloc(4);
    if (c1 == NULL)
        return (1);
    ft_memset(c1, 'f', 3);
    c1[3] = '\0';

    printf("%c\n", c1[1]);
    free(c1);
    return (0);
}

