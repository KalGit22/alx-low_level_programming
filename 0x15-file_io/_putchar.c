#include <unistd>

/**
 * _putchar - write character to stdout
 * @c: character to print
 * Return: 1 for success,-1 for error and errono set properly
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
