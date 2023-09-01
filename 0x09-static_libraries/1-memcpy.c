#include "main.h"

/**
 * _memcpy - Function that copies memory area
 *
 * @dest: destination parameter
 * @src: source parameter
 * @n: number of items to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}
