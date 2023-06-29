#include "main.h"

/**
 * _strcmp - it compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns an integer
 */

int _strcmp(char *s1, char *s2)
{
	if (s1 == s2)
	{
		return (0);
	}
	return (s1 - s2);
}
