#include <stdio.h>

/**
 * main - it prints all single digit numbers of base 10
 *	starting from 0, followed by a new line
 * Return: always 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}

	putchar('\n');

	return (0);
}
