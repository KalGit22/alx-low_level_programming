#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: input string pointer
 * Return: void
 */

void rev_string(char *s)
{
	char *start = s;
	int i = 0;

	for (i; s[i] != '\0'; i++)
		;
	char *end = start + i - 1;

	while (end > start)
	{
		char temp = *end;
		*end-- = *start;
		*start++ = temp;
	}
}
