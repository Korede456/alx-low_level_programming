#include "main.h"

/**
 * _isupper - it checks if a charcter is in uppercase
 * @c: it's the character to be checked
 * Return: always 0
 */

int _isupper(int c)
{
	if (c > 'Z' || c < 'A')
	{
		return (0);
	}
	return (1);
}
