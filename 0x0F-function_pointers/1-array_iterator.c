#include "function_pointers.h"

/**
 * array_iterator - it iterates through an array
 * @array: array to be iterated
 * @size: size of the array
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;

	for (i; i < size; i++)
	{
		(*action)(array[i]);
	}
}
