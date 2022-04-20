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
	while (*src != '\0')
	{
		*dest = *src;
		scr++;
		dest++;
	}
	dest[-1] = '\0';
	return (dest);
}
