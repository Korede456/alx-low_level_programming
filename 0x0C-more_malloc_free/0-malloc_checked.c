#include "main.h"

/**
 * malloc_checked - entry point
 * @b: memory size
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *memory;

	memory = malloc(b);

	if (!memory)
	{
		exit(98);
	}
	return (memory);
}
