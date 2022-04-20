#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @n: array size
 * @a:array of n size
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
			if (i != 4)
			{
				printf(", ");
			}
	}
	printf("\n");
}
