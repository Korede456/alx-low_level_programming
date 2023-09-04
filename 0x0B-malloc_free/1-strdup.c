#include "main.h"

/**
 * _strdup - duplicates a string
 * str: string input
 * return: a pointer
 */

char *_strdup(char *str)
{
	char *dupstring;

	dupstring = malloc(sizeof(str));

	if (!str)
	{
		return (NULL);
	}
	if (!dupstring)
	{
		return (NULL);
	}

	dupstring = strcpy(str);
	return (dupstring);
}
