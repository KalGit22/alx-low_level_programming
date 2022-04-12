#include "main.h"

/**
 * jack_bauer - entry point
 * Deskription - display 24 hour
 * Return: nothing
 */
void jack_bauer(void)
{
	int minute, hour, k;

	for (k = 0; k <= 1440; k++)
	{
		hour = k / 60;
		minute = k - 60 * k;
		_putchar(hour / 10 + '0');
		_putchar(hour % 10 + '0');
		_putchar(':');
		_putchar(minute / 10 + '0');
		_putchar(minute % 10 + '0');
		_putchar('\n');
	}
}
