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

	error[] = "failed to allocate memory";
	dupstring = (char *)malloc(strlen(str) + 1);

	if (str == NULL)
	{
		while (error)
		{
			_putchar(error);
			error++;
		}
		return (NULL);
	}
	if (dupstring == NULL)
	{
		return (NULL);
	}

	dupstring = strcpy(dupstring, str);
	return (dupstring);
}
