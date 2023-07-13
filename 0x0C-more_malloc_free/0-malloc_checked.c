#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - entry point
 * @b: parameter
 * Return: A pointer to the allocated
 * memory
 */

void *malloc_checked(unsigned int b)
{
	int *num;

	num = (int *)malloc(sizeof(b));

	if (num == NULL)
	{
		_putchar('0' + 98);
	}

	return (num);
}
