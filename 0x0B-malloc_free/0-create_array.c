#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - A function that allocates memory
 * space for an array
 * @size: size of the array
 * @c: parameter
 * Return: a char value
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL); /* Return NULL if size is 0 */
	}

	char *array;
	unsigned int i;

	array = (char *)malloc(size); /* allocate memory for the array */

	if (array == NULL)
	{
		return (NULL); /* Return NULL if memory allocation fails */
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
