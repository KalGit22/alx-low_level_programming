#include "main.h"

/**
 * more_numbers - prints 10 times
 * Return: void
 */

void more_numbers(void);
{
	int x, y, z;

	for (z = 0; z < 10; z++)
	{
		for (x = 0; x <= 1; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				if (!(x == 1 && y >= 5))
				{
					if (x)
						_putchar(x + '0');
					_putchar(y + '0');
				}
			}
		}
		_putchar('\n');
	}
}
