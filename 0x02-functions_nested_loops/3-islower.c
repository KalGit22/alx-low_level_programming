#include "main.h"

/**
 * _islower - Entry point
 * Description: check if int c is lower or upper case
 * @c: the character to be checked
 * Return: 0 if upper case or 1 if lower case
 */
int _islower(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
