#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string input
 * Return: a pointer
 */

char *_strdup(char *str)
{
	char *dupstring;
	char *error;

	dupstring = (char *)malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (dupstring == NULL)
	{
		return (NULL);
	}

	dupstring = strcpy(dupstring, str);
	return (dupstring);
}
