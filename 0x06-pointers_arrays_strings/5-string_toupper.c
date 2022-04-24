#include "main.h"

/**
 * string_toupper - string to capital letter
 * @str: input string
 * Return: capitalized string
 */
char *string_toupper(char *str)

{
	int pos = 0;

	while (str[pos])
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
			str[pos] -= 32;
		str++;
	}
	return (str);
}
