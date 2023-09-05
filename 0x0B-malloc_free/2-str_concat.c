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

	string = malloc(sizeof(s1) + sizeof(s2));

	if (!s1 && !s2)
	{
		return (NULL);
	}

	strcpy(string, s1);
	strcat(string, s2);

	if (!string)
	{
		return (NULL);
	}
	free(string);
	return (string);
}
