#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: input string pointer
 * Return: void
 */

void rev_string(char *s)
{
	char tempo;
	int k, half, ls;

	for (ls = 0; s[ls] != '\0'; ls++)
	;
	k = 0;
	half = ls / 2;
	while (half--)
	{
		tempo = s[ls - k - 1];
		s[ls - k - 1] = s[k];
		s[k] = tempo;
		k++;
	}
}
