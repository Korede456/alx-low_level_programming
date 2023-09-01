#include "main.h"

/**
 * _isalpha - it checks if an input is an alphabet or not
 * @c: is the character to be checked
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if (c < 'A' || c > 'z')
	{
		return (0);
	}
	return (1);
}
