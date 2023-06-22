#include "main.h"

/**
 * print_diagonal - it prints a diagonal pattern
 * @n: is the size of the pattern
 */

void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');

	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j != i)
				_putchar(' ');
			_putchar('\\');
		}
		_putchar('\n');
	}
}
