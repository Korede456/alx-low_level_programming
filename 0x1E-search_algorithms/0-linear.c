#include "search_algos.h"

/**
 * linear_search - it searches for a value in an array
 * @array: points to the array to be searched
 * @size: its the size of the array
 * @value: item to be searched for
 * Return: always an integer
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
