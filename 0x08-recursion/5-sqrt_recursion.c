#include "main.h"

/**
 * _sqrt_recursion - entry point
 * @n: input integer
 * Return: returns integer always
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		return (root-recursion(n, 0, n / 2));
	}
}

/**
 * root-recursion - searches for the root
 * @a: input
 * @begin: input 2
 * @end: input 3
 * Return: integer always
 */

int root-recursion(int a, int begin, int end)
{
	int middle, squ;

	if (begin <= end)
	{
		middle = begin + (end - begin) / 2;
		squ = middle * middle;

		if (squ == n)
		{
			return (middle);
		}
		else if (squ < n)
		{
			return (root-recursion(a, middle + 1, end));
		}
		else
		{
			return (root-recursion(a, begin, middle - 1));
		}
	}
	return (-1);
}
