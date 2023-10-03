#include "main.h"

/**
 * _strdup - A function that returns a pointer to a
 * newly allocated space in memory
 * @str: string parameter
 * Return: pointer to a newly allocated space
 */

char *_strdup(char *str)
{
	char *str2;

	str2 = (char *)malloc(strlen(str) + 1);

	if (str == NULL)
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
