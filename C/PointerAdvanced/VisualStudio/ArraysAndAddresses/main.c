#include <stdio.h>

int main(int argc, char **argv) {
	char str1[10] = "Hello";
	char *str2 = "Goodbye";
	printf("%d %d %s\n", &str1, str1, str1);
	printf("%d %d %s\n", &str2, str2, str2);
	printf("-----pointer arithmetic-----\n");
	printf("&str1 + 1 <- + 10 bytes: %d\n", &str1 + 1); // 
	printf("str1 +1 <- 1 bytes: %d\n", str1 + 1 );
	return 0;
}
