#include "main.h"

/**
 * print_triangle - it prints a triangle pattern
 * @size: is the size of the pattern
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j + 1 <= size)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
		}
	}
}
