#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: A pointer to an array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if(width <= 0 || height <= 0)
	{
		return (NULL);
	}

	array = (int **)malloc(height * sizeof(int*));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));

		if (array[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}

		for (int j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
			
