#include "main.h"

/**
 * _strlen - it returns the length of a string
 * @s: it's the parameter
 * Return: returns the length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s != '\0')
	{
		length++;

		*s++;
	}

	return (length);
}
