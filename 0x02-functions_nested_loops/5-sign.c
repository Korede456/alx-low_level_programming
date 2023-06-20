#include "main.h"

/**
 * print_sign - it checks if a number is positive or negative
 * @n: is the character to be checked
 * Return: 0, + or -
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
