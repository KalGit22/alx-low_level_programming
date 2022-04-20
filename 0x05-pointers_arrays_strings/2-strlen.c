#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s:character pointer
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		*(s++);
	}
	return (count);
}
