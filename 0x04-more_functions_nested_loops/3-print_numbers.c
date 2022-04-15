#include "main.h"

/**
 * print_numbers - print from 0 to 9
 * Return: 0
 */
void print_numbers(void)
{
	int k;

	k = 0;
	for (k = 0; k < 10; k++)
	{
		_putchar(k + '0');
		_putchar('\n');
	}
	return (0);
}
