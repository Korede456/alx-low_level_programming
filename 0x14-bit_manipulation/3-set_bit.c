#include "main.h"

/**
 * set_bit - sets the value of a bit to 1
 * @n: number to be converted
 * @index: index to be changed
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= temp;
	return (1);
}
