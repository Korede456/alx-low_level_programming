#include "main.h"

/**
 * _strcat - it concatenate two strings
 * @dest: 1st parameter
 * @src: 2nd parameter
 * Return: it returns a character type
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
