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
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
