#include "main.h"

/**
 * print_sign - entry point
 * @n: given integer input
 * Return: 0 for zero, 1 for positive and -1 fo negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
