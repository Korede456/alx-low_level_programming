#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include  <string.h>

/**
 * _strdup - A function that returns a pointer to a
 * newly allocated space in memory
 * @str: string parameter
 * Return: pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	unsigned int size;
	char *str2;

	size = strlen(str) + 1;
	str2 = (char *)malloc(size);

	if (str == NULL)
	{
		return (NULL);
	}

	if (*str == NULL)
	{
		return (NULL);
	}

	if (str2 == NULL)
	{
		return (NULL);
	}

	str2 = strcpy(str2, str);
	return (str2);
}
