#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function 
 */
void print_name(char *name, void (*f)(char *))
{
i	if (name == NULL || f == NULL)
		return;

	f(name);
}
