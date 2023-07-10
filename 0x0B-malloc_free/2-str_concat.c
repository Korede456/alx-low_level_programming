#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * str_concat - A function that concatenate teo strings
 * @s1: the first string
 * @s2: the second string
 * Return: Return a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int size;
	char *newstring;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	size = (strlen(s1) + strlen(s2) + 1);
	newstring = (char *)malloc(size);

	if (newstring == NULL)
	{
		return (NULL);
	}

	newstring = strcat(s1, s2);

	return (newstring);
}
