#include <stdlib.h>
#include "main.h"

/**
 * create_array - Creates an array of chars & initializes with a specific char.
 * @size: size of the array
 * @c: specific char
 * Return: If size == 0 or the function fails - NULL.
 *         Otherwise - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		array[x] = c;

	return (array);
}
