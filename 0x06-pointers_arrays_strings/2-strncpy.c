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
	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
