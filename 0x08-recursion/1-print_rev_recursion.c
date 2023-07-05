#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s: input
 */

void _print_rev_recursion(char *s)
{
	char a = *s;

	if (*s == '\0')
	{
		_putchar('\n');

		return;
	}

	_print_rev_recursion(s + 1);

	_putchar(a);
}
