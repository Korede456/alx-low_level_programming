#include "main.h"

/**
 * _isdigit - it checks if an input is a digit or not
 * @c: is the data to be checked
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= 0 || c <= 9)
	{
		return (1);
	}
	return (0);
}
