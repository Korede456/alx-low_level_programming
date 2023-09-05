#include "main.h"

/**
 * str_concat - A function that concatenate teo strings
 * @s1: the first string
 * @s2: the second string
 * Return: Return a pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *newstring;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	newstring = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (newstring == NULL)
	{
		return (NULL);
	}

	strcpy(newstring, s1);
	strcat(newstring, s2);

	return (newstring);
}
