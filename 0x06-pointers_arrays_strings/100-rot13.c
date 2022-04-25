#include "main.h"

/**
 * rot13 - rot13 function
 * @str: input string
 * Return: encoded string
 */

char *rot13(char *str)
{
	int i, len = 0;

	while (str[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if((*(str + i) >= 'a' && *(str + i) < 'n') || (*(str + i) >= 'A' && *(str + i) < 'N'))
			*(str + i) += 13;
		else if ((*(str + i) > 'm' && *(str + i) < 'z') || (*(str + i) > 'M' && *(str + i) < 'Z'))
			*(str + i) -= 13;
	}
		return (str);
}
