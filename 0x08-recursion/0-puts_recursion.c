#include "main.h"

/**
 * _puts_recursion - entry point
 * @s: input string
 */

void _puts_recursion(char *s)
{
	char later = *s;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(later);
	_puts_recursion(s + 1);
}
