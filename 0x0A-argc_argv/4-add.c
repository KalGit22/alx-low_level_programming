#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer, otherwise 0
 */

int main(int argc, char *argv[])
{
	int a, b, len, sum;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		sum = 0;
		for (i = a; a < argc; a++)
		{
			ptr = argv[i];
			len = strlen(ptr);

			for (b = 0; b < len; b++)
			{
				if (isdigit(*(ptr + b)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[a]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
