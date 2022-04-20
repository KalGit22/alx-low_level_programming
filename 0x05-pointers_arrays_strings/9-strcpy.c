#include "main.h"

/**
 *_strcpy - Copies from source to destinition
 * @dest: destination buffer
 * @src: source buffer
 * Description: Function to copy string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	while (*src != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[-1] = '\0';
	return (dest);
}
