#include "main.h"

/**
 *_strcat - concatinating function
 *@dest: desatination pointer
 *@src: source pointer
 *Return: concatinated string
 */
char *_strcat(char *dest, char *src)
{
	int in = 0, len = 0;

	while (dest[in++])
		len++;
	for (in = 0; src[in]; in++)
		dest[len++] = src[in];
	return (dest);
}
