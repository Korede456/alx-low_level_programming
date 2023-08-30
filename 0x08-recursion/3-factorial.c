#include "main.h"

/**
 * factorial - entry point
 * @n: inputed integer
 * Return: it returns an integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return ((n) * (factorial(n - 1)));
	}
}
