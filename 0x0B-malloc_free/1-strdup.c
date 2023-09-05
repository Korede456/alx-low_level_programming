#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string input
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *dupstring;

	dupstring = (char *)malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (!dupstring)
	{
		return (NULL);
	}

	strcpy(dupstring, str);
	return (dupstring);
}
