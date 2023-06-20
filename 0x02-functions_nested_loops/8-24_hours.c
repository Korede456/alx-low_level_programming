#include "main.h"

/**
 * jack_bauer - prints all minuts of the day
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 24; hour++)
	{
		for (minute = 0; minute <= 60; minute++)
		{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');
		_putchar((j / 10) + '0');
		_putchar((j % 10) + '0');
		_putchar('\n');
		}
	}
}
