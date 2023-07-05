#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: input
 */

void _puts_recursion(char *s)
{
	char a = *s;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(a);
	_puts_recursion(s + 1);
}
