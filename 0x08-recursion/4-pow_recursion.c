#include "main.h"

/**
 * _pow_recursion - entry point
 * @x: the inputed number
 * @y: the power
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	int result;

	result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		result *= x;
		y--;

		return (_pow_recursion(x, y));
	}
}
