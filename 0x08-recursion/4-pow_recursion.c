#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to y
 * @x: integer
 * @y: integer
 * Return: If y is lower than 0,it return -1
 */
int _pow_recursion(int x, int y)
{
	int x;
	int y;

	if (y < 0)
	{
		return (-1);
	}
	else
	{
		_pow_recursion(X ^ y);
	}
}
