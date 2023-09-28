#include "main.h"

/**
 * _strlen_recursion - entry point
 * @s: input string
 * Return: an interger
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
