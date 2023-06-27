#include "main.h"

/**
 * rev_string - it reverses a string
 * @s: the input parameter
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		rev - s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
