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

	if (*s != '\0')
	{
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
