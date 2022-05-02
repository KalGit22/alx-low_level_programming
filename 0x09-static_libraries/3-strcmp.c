#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: string one
 * @s2: string two
 * Return: an int value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
		{
			break;
		}
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
