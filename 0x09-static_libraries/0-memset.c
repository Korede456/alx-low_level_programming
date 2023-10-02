#include "main.h"

/**
 * _memset - function that ills memor
 * with a constant byte
 *
 * @s: the memory parameter
 * @b: the byte to be printed
 * @n: the frequency of the byte
 *
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
