#include "main.h"

/**
 * _strpbrk - searches a string for any
 * of a set of bytes.
 *
 * @s: is the string to be searched
 * @accept: is the string to be searched for
 *
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; k++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
