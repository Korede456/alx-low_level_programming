#include "main.h"

/**
 * str_concat - it concatenate two strings
 * @s1: string1
 * @s2: string2
 * Return: a pointer to a char
 */

char *str_concat(char *s1, char *s2)
{
	char *string;

	string = (char *)malloc(strlen(s1) + strlen(s2) + 1);

	if (s1 == NULL)
	{
		S2 = "";
	}
	if (s2 == NULL)
	{
		S1 = "";
	}

	strcpy(string, s1);
	strcat(string, s2);

	if (!string)
	{
		return (NULL);
	}

	return (string);
}
