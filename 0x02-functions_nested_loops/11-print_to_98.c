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
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
