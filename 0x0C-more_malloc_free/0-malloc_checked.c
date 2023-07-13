#include <stdio.h>
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

	num = malloc(sizeof(b));

	if (num == NULL)
	{
		return (98);
	}

	return (num);
}
