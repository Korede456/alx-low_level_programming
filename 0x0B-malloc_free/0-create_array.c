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
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL); /* Return NULL if size is 0 */
	}

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
