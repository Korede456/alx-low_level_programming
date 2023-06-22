#include "main.h"

/**
 * print_line - it prints a straight line
 * @n: is the number of times - will be printed
 */

void print_line(int n)
{
	int i;

	if (n != 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
