#include "main.h"

/**
 * _strncat - concatenate two strings wth n size
 * @dest: destination string pointer
 * @src: source string pointer
 * @n: number of bytes to concatinate
 * Description: COncatinate two strings with n bytes
 * Return: a pointer to the concatianted string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
