#include "main.h"

/**
 * rot13 - rot13 function
 * @str: input string
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'm')
		{
			str[i] += 13;
			continue;
		}
		if (str[i] >= 'A' && str[i] <= 'M')
		{
			str[i] += 13;
			continue;
		}
		if (str[i] >= 'n' && str[i] <= 'z')
		{
			str[i] -= 13;
			continue;
		}
		if (str[i] >= 'N' && str[i] <= 'Z')
		{
			str[i] -= 13;
			continue;
		}
	}
	return (str);
}
