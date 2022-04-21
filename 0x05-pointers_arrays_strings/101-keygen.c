#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generates random valid passwords for the program
 *
 * Return: 0
 */

extern int rand (void) __THROW
{
	int x;
	char ch;

	rand(time(NULL));
	while (x <= 2645)
	{
		ch = rand() % 128;
		x += ch;
		putchar(ch);
	}
	putchar(2772 - x);
	return (0);
}
