#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void    string_exited(char* str, int len)
{
    char* new_str;

    new_str = strndup(str, len + 1);
    new_str[len] = '!';
    printf("%s\n", new_str);
}

int main()
{
    const   char*   message = "Hello World";
    string_exited(message, 11);
    return (0);
}
