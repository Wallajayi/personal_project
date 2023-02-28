#include <stdio.h>

/**
 * main - function to add two integers
 * could be used as adding machine
 * Return: 0
 */

int main(void)
{
	double x, y, z;

	printf("pls input first number :");
	scanf("%lf", &x);

	printf("pls input secomd number :");
	scanf("%lf", &y);

	z = x + y;

	printf("Ans =  %lf\nThank you for CALCULATING with us\n", z);

	return (0);
}

