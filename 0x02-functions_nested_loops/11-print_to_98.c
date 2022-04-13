#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - entry point
 * @n: input number
 * Description: print up to 98 from a given number
 * Retrun: Nothing
 */
void print_to_98(int n)
{
	int index;

	if (n < 98)
	{
		for (index = n; index <= 98; index++)
		{
			if (index != 98)
			{
				printf("%d, ", index);
			}
		}
		_putchar('\n');
	}
	else
	{
		for (index = n; index >= 98; index--)
		{
			if (index != 98)
			{
				printf("%d, ", index);
			}
		}
		_putchar('\n');
	}
}
