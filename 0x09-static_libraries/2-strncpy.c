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
	int pos = 0, i = 0;

	while (src[pos++])
	{
		i++;
	}
	for (pos = 0; src[pos] && pos < n; pos++)
	{
		dest[pos] = src[pos];
	}
	for (pos = i; pos < n; pos++)
	{
		dest[pos] = '\0';
	}
	return (dest);
}
