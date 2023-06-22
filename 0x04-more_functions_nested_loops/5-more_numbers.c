#include "main.h"

/**
 * more_numbers - print 0 - 14, 10 times
 */

void more_numbers(void)
{
	int i;
	int num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
