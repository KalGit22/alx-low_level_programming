#include "main.h"

/**
 *_strncpy - function to copy string
 *@dest: destinition pointer
 *@src: source pointer
 *@n: size to copy
 *Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int pos, i;

	for (i = 0; src[i] != '\0'; ++i)
		;
	for (pos = 0; src[i] && pos < n; pos++)
	{
		dest[pos] = src[pos];
	}
	*dest = '\0';
	return (dest);
}
