#include "main.h"

/**
 * char *_strcpy - a function that copy's a string into anoter variable
 * @dest: copy to
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l, x;

	l = 0;

	while (*(src + l) != '\0')
		l++;

	for (x = 0; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';

	return (dest);
}
