#include <stdio.h>

int subtract_numbers(int a,int b);
int add_numbers(int a, int b);

int main()
{
	int add_result = 0;
	int sub_result = 0;

	printf("Hello World: This is the master and  dev branch combined\n");

	sub_result = subtract_numbers(8,2);
	printf("%d\n", sub_result);

	add_result = add_numbers(5,5);
	printf("%d\n", add_result);	
	return 0;
}

int subtract_numbers(int a, int b)
{

	return a - b;
}


int add_numbers(int a, int b)
{
	return a + b;
}
