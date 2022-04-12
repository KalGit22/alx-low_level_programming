#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: prints 10 times the alphabet, in lowercase
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int index;

	for (index = 0; index <= 9; index++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
