#include "main.h"

/**
 * string_nconcat - it concatenate 2 strings
 * @s1: first string
 * @s2: second string
 * @n: no of chars to concatenate
 * Return: a pointer to a memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size;
	char *ptr;
	char str[n];
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if(s1 == NULL)
	{
		s2  = "";
	}

	if (n >= sizeof(s2))
	{
		size = sizeof(s1) + sizeof(s2);
		ptr = malloc(size);
		ptr = strcat(s1, s2);
	}
	else
	{
		size = sizeof(s1) + n;
		ptr = malloc(size);
		i = 0;

		while (i < n)
		{
			str[i] = *s2;
			i++;
			s2++;
		}
		ptr = strcat(s1, str);
	}
	if (!ptr)
	{
		return (NULL);
	}

	return (ptr);
}
