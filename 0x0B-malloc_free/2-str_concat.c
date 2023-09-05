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

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	size = (strlen(s1) + strlen(s2) + 1);
	newstring = (char *)malloc(size);

	if (newstring == NULL)
	{
		return (NULL);
	}

	strcpy(newstring, s1);
	strcat(newstring, s2);

	return (newstring);
}
