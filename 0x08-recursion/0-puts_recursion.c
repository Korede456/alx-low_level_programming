#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: input
 */

void _puts_recursion(char *s)
{
	char a = *s;

	_putchar(a);
	s++;

	if (*s)
	{
		_puts_recursion(s);
	}
}
