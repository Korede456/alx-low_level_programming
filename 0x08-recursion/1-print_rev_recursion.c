#include "main.h"

/**
 * _print_rev_recursion - entry point
 * @s: string input
 */

void _print_rev_recurion(char *s)
{
	int i;
	char later;

	i = (lenght(*s) - 1);
	later = s[i];

	while (*s)
	{
		if (i == -1)
		{
			_putchar('\n');
			return;
		}
		_putchar(later);
		_print_rev_recursion(*s);
}

/**
 * lenght - it calculates the lenght of the string
 * @s: string input
 */

int lenght(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		*s++;
	}
	return (i);
}
