#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s: string input
 */

void _print_rev_recurion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
