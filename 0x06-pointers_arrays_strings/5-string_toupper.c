#include "main.h"

/**
 * string_toupper - it changes all lowercase letters of
 * @n: the string to be checked
 * Return: returns a char value
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

