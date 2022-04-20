#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: input string pointer
 * Return: void
 */

void rev_string(char *s)
{
	char *start = s;

	char *end = start + _strlen(start) - 1;

	while (end > start)
	{
		char temp = *end;
		*end-- = *start;
		*start++ = temp;
	}
}
