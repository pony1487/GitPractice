#include <stdio.h>

int add_numbers(int a, int b);

int main()
{
	int result = 0;

	printf("Hello World: This is the dev branch\n");

	result = add_numbers(5,5);
	printf("%d\n", result);

	return 0;
}


int add_numbers(int a, int b)
{
	int sum = 0;
	sum = a + b;
	return sum;
}
