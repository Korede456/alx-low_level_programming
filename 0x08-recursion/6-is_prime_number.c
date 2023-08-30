#include "main.h"

/**
 * is_prime_number - entry point
 * @n: intput
 * Return: integer always
 */

int is_prime_number(int n)
{
	if(n <= 1)
	{
		return (0);
	}
	return (_prime(n, n-1));
}


/**
 * _prime - entry
 * @n: input 1
 * @j: input 2
 * Return: integer always
 */

int _prime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && j > 0)
	{
		return (0);
	}
	return (_prime(n, j - 1));
}
