#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  generates random valid passwords for the program 101-crackme
 *
 * Return: 0
 */

int main(void)
{
	int x;
	char ch;

	srand(time(NULL));
	while (x <= 2645)
	{
		ch = rand() % 128;
		x += ch;
		putchar(ch);
	}
	putchar(2772 - x);
	return (o);
}
