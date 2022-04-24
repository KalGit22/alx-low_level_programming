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
	char *str3;

	while (src[i] != '\0')
	{
		str3[j] = src[i];
		i++;
		j++;
	}
	while (dest[i] != '\0')
	{
		str3[j] = dest[i];
		i++;
		j++;
	}
	str3[j] = '\0';
	return (str3);
}
