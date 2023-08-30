#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: input string
 * Return: an interger
 */

int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	return (i -1);
}
