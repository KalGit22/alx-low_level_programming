#include <main.h>

/**
 * _strcat - concatenates two strings
 * @dest: destnition pointer
 * @src: source pointer
 * Return: dest
 */

char *_strcat(char *dest, const char *src)
{
	int i;
	char *ptr = dest + i;

	for (i = 0; dest[i] != '\0'; ++i)
		;
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
