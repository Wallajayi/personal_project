#include <stdio.h>

// This program takes two integers and an operator and returns the result

int main()
{
	double n1, n2, result;
	char ch;

	printf("please input operator: ");
	scanf("%c", &ch);

	printf("Please input first number: ");
	scanf("%lf", &n1);

	printf("please input second number: ");
	scanf("%lf", &n2);

	switch(ch)
	{
	case '+':
	result = n1 + n2;
	printf("%.2lf + %.2lf = %.2lf\n", n1, n2, result);
	break;

	case '*':
	result = n1 * n2;
	printf("%.2lf * %.2lf = %.2lf\n", n1, n2, result);
	break;

	case '-':
	result = n1 - n2;
	printf("%.2lf - %.2lf = %.2lf\n", n1, n2, result);
	break;

	case '/':
	result = n1 / n2;
	printf("%.2lf / %.2lf = %.2lf\n", n1, n2, result);
	break;

	default:
	printf("%c is not a valid operator", ch);
	}

	printf("Thank you for calculating with us!!\n");
	return 0;
}
