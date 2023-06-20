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
		c *= -1;
	}

	last_digit = c % 10;

	_putchar('0' + last_digit);

	return (last_digit);
}
