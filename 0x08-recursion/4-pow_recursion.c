#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to y
 * @x: integer
 * @y: integer
 * Return: If y is lower than 0,it return -1
 */
int _pow_recursion(int x, int y)
{
	int fvalue = x;


	if  (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	fvalue *= _pow_recursion(x, y - 1);
	}
	return (fvalue);
}
