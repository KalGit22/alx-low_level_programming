#include "main.h"

/**
 * _abs - Entry Point
 * @num: input value
 * Description: returns the absolute value of given input
 * Return: the positive value of any number
 */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (-1 * num);
	}
}
