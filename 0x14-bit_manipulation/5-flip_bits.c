#include "main.h"

/**
 * flip_bits - flip bits
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor;
	unsigned int count;

	if (n == '\0' || m == '\0')
	{
		return ('\0');
	}

	xor = n ^ m;
	count = 0;

	while (xor)
	{
		count += xor & 1;
		xor >>= 1;
	}

	return (count);
}
