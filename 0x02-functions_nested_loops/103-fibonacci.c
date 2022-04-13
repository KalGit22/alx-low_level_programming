#include <stdio.h>

/**
 * main - entry point
 * Description:program that finds and prints the sum of the even-valued terms
 * Return: 0
 */
int main(void)
{
	int fib1 = 0, fib2 = 1, fib3 = 0;
	int sum = 0;

	while (next < 4000000)
	{
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if (fib3 % 2 == 0)
			sum += fib3;
	}
	printf("%i\n", sum);
	return (0);
}
