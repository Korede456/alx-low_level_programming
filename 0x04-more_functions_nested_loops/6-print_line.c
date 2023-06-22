#include "main.h"

/**
 * print_line - it prints a straight line
 * @n: is the number of times - will be printed
 */

void print_line(int n)
{
	if (n == 0)
	{
		_putchar('\n');
		break;
	}

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
}
