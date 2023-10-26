#include "main.h"

/**
 * get_bit - returns the value of a it at
 * a given index
 *
 * @n: number to be converted
 * @index: index to be returned
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int temp;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	temp = 1UL << index;

	if ((n & temp) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
