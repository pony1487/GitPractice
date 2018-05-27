#include <stdio.h>

int subtract_numbers(int a,int b);
int add_numbers(int a, int b);
float divide(float a, float b);

int main()
{
	int add_result = 0;
	int sub_result = 0;
	float div_result = 0.0;

	printf("Hello World: This is the master and  dev branch combined\n");

	sub_result = subtract_numbers(8,2);
	printf("%d\n", sub_result);

	add_result = add_numbers(5,5);
	printf("%d\n", add_result);	

	div_result = divide(10,2);
	printf("%f\n", div_result);
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


float divide(float a, float b)
{
	return a / b;
}
