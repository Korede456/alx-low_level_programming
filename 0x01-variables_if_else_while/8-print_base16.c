#include <stdio.h>

/**
 * main - prints all the hexadecimal numbers
 * Return: always 0
 */

int main(void)
{
	char hexa;

	for (hexa = '0'; hexa <= '9'; hexa++)
	{
		putchar(hexa);
	}

	for (hexa = 'a'; hexa <= 'f'; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');

	return (0);
