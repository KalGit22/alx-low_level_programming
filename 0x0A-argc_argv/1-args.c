#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: Number of command line arguments
 * @argv: Name of the array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (k = 0; *argv; i++, argv++)
			;

		printf("%d\n", k - 1);
	}

	return (0);
}
