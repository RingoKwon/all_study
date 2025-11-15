#include <stdio.h>

static void print_message(char* text)
{
	if (text != NULL) {
		printf("Hello, %s!\n", text);
	} else {
		printf("This space left intentionally"
			" blank.\n");
	}
}

int main()
{
	char* world;

	print_message(world);

	return 0;
}