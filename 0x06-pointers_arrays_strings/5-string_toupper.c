#include "main.h"

/**
*string_toupper -change lower to upper
*@str: The string to be changed.
*Return: A pointer to the changed string.
*/

char *string_toupper(char *str)
{
	int pos = 0;

	while (str[pos])
	{
		if (str[pos] >= 'a' && str[pos] <= 'z')
			str[pos] -= 32;
		pos++;
	}
	return (str);
}
