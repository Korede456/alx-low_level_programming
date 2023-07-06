#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: input
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
	}
	_strlen_recursion(s + 1);

	return (len);
}
