#include "main.h"

/**
 * print_binary - prints binary
 * @n: number to be printed
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	unsigned long int temp;

	temp = 1UL << (8 * sizeof(unsigned long int) - 1);

	for (i = 0; i <8 * sizeof(unsigned long int); i++)
	{
		if (n & temp)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		temp >>= 1;
	}
	_putchar('\n');
}
