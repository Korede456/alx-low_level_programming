#include "main.h"

/**
 * print_last_digit - it prints the last digit of an integer
 * @c: is the parameter to be checked
 * Return: 0 (success)
 */

int print_last_digit(int c)
{
	int last_digit;

	if (c < 0)
	{
		c = -c;
	}

	last_digit = c % 10;

	_putchar(last_digit + '0');

	return (last_digit);
}
