#include "main.h"

/**
 * print_numbers - it print numbers from 0 - 9
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar("\n");
}
