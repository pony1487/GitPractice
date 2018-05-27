#include <stdio.h>

int subtract_numbers(int a,int b);

int main()
{
	int result = 0;

	printf("Hello World: This is the master and  dev branch combined\n");

	result = subtract_numbers(8,2);
	printf("%d\n", result);
	return 0;
}

int subtract_numbers(int a, int b)
{

	return a - b;
}
