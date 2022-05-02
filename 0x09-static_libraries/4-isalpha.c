#include "main.h"

/**
 * _isalpha - entry point
 * @c: input letter
 * Return: 0 if not later otherwise 1
 */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
