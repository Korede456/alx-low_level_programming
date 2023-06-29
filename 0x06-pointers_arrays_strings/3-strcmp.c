#include "main.h"

/**
 * _strcmp - it compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	if (s1 == s2)
	{
		return (0);
	}
	else
	{
		i = 0;

		while (s1[i] != '\0' && s2[i] != '\0')
		{
			result = (s1[i] - s2[i]);

			if (result != 0)
			{
				break;
			}
			else
			{
				continue;
			}
			i++;
		}
	}
	return (result);
}
