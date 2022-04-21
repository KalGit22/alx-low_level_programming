#include "main.h"

/**
 * puts2 - prints every other character of a string starting with first one
 * @str: string reference
 * Return: void
 */

void puts2(char *str)
{
	int m = 0;

	while (str[m] != '\0')
	{
		if (m % 2 == 0)
		{
			_putchar(str[m]);
		}
		k++;
	}
	_putchar('\n');
}
