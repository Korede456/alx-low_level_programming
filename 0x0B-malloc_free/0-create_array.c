#include "main.h"

/**
 * create_array - it create an array of chars
 * size: size of the array
 * c: char to be initialised
 * Return: a pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	i = 0;
	array = malloc(size * sizeof(c));


	if (size == 0)
	{
		return (NULL);
	}
	if (!array)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
