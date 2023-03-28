#include <stdio.h>

/**
 * main - function to subtract two numbers 
 *
 * Return: always 0
 */

int main(void)
{
	double a, b, x;

	printf("Input first numbers:");
	scanf("%lf", &a);

	printf("Input second numbers:");
	scanf("%lf", &b);

	x = a - b;

	printf("SUM = %lf\n", x);
	printf("Thank you for CALCULATING with us\n");
	return (0);
}
