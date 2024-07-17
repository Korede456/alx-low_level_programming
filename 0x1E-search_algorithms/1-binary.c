#include <stdio.h>

/**
 * print_array - handles printing
 * @array: array to print
 * @left: first param
 * @right: second param
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
		{
			printf(", ");
		}
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array
 * @array: array to search from
 * @size: size of the array
 * @value: to be searched for
 * Return: always int
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t left = 0;
	size_t right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		print_array(array, left, right);

		mid = left + (right - left) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	return (-1);
}
