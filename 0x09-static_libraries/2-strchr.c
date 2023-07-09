#include "main.h"

/**
 * _strchr - Function that locates a character
 * in a string
 *
 * @s: a pointer to the string
 * @c: the character to be checked for
 *
 * Return: a pointer to a char or null
 */

char *_strchr(char *s, char c)
{
	while (*s >= 0)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
