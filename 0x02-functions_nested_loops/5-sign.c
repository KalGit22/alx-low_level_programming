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
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
