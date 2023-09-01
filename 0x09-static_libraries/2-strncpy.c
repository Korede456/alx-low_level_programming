#include "main.h"

/**
 * _strncpy - it copys a specified amount of characters from
 * a source string to a destination
 * @dest: destination
 * @src: source
 * @n: number of characters to copy
 * Return: the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
