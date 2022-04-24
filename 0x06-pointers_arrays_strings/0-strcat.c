#include <main.h>

/**
 * _strcat - concatenates two strings
 * @dest: destnition pointer
 * @src: source pointer
 * Return: dest
 */

char *_strcat(char *dest, const char *src)
{
	int i = 0, j = 0;


	while (src[i] != '\0')
	{
		j++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}
	return (str3);
}
