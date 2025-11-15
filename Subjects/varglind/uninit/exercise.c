#include <stdio.h>
#include <stdlib.h>

static int abs_sum(int a, int b)
{
	if (a < 0) {
		a *= -1;
	}

	if (b < 0) {
		b *= -1;
	}

	return a + b;
}

static int get_result(int base_num)
{
	int user_entered;

	printf("Enter a number: ");
	scanf("%d", &user_entered);

	return abs_sum(base_num, user_entered);
}

int main()
{
	int base_num;
	int result;

	get_result(base_num);
	printf("Result: %d\n", result);
	
	return result;
}