#include "main.h"

/**
 * print_rev - it prints a string in veverse
 * @s: its the parameter
 */

void print_rev(char *s)
{
	int i, j;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;

	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
