#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: is the value
 * @y: is the power
 * Return: an integer always
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return ((x) ** (y));
	}
}
