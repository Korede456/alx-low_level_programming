#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - entry point 
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 *
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i;
	unsigned int j;
	unsigned int len1;
	unsigned int len2;

	i = 0;
	j = 0;
	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (i < len1)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
