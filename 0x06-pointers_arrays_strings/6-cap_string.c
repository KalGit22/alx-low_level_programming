#include "main.h"

/**
 * cap_string - function to change given string to upper case
 * @str: input string
 * Return: Capitalized string
 */

char *cap_string(char *str)
{
	int point = 0;

	while (str[point])
	{
		while (!(str[point] >= 'a' && str[point] <= 'z'))
			point++;
		if (str[point - 1] == ' ' ||
				str[point - 1] == '\t' ||
				str[point - 1] == '\n' ||
				str[point - 1] == ',' ||
				str[point - 1] == ';' ||
				str[point - 1] == '.' ||
				str[point - 1] == '!' ||
				str[point - 1] == '?' ||
				str[point - 1] == '"' ||
				str[point - 1] == '(' ||
				str[point - 1] == ')' ||
				str[point - 1] == '{' ||
				str[point - 1] == '}' ||
				point == 0)
			str[point] -= 32;
		point++;
	}
	return (str);

