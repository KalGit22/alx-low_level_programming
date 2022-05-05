#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * @str: string to be copied.
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	int x, len = 0;
	char *duplicate;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (x = 0; str[x]; x++)
		duplicate[x] = str[x];

	duplicate[len] = '\0';

	return (duplicate);
}
