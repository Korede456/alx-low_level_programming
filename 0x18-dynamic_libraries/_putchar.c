#include <unistd.h>
#include "main.h"

/**
 * _putchar - it prints a char type
 * @c: input
 * Return: always 0
 */

int _putchar(char c)
{
	write(1, &c, 1);

	return (0);
}
