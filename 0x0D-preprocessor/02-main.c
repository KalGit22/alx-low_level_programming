#include <stdio.h>

/**
 * main - entry point
 * Descriptin: prints name of the file it was compiled from
 * Return: nothing
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
