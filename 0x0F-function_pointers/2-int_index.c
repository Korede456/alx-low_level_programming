#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - it searches for an integer
 * @array: array of passed
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: an integer
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}

