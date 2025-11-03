#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char* name = "mike";
    char* name2 = strdup(name);

    printf("Hello %s\n",name);
    printf("Hello again %s\n",name2);

    free(name2);

    return 0;
}
