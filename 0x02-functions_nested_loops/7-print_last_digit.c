#include "main.h"

/**
 * print_last_digit - Entry point
 * @num: input number
 * Description: calculates the last digit of a number
 * Return: last digit of input number num
 */
int print_last_digit(int num)
{
	int digit = num % 10;

	if (digit < 0)
	{
		digit *= -1;
	}
	_putchar(digit + '0');
	return (digit);
}
