#include <stdio.h>

// Main: This main program takes an integer and gives the multiplication table from 1-10

void main()
{
	int number;
	printf("Please input a number: ");
	int i;
	scanf("%d", &number);

	for (i = 1 ; i <= 10 ; i++)
	{
		int mult = number * i;
		printf("%d * %d = %d\n", number, i, mult);
	}

	printf("Thank you\nbe sure to come back!!\n");
	return;
}
