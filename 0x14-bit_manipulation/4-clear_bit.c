#include "main.h"

/**
 * clear_bit - clears bit to zero
 * @n: number to be converted
 * @index: index to be cleared
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	temp = 1UL << index;
	temp = ~temp;
	*n &= temp;

	return (1);
}
