#include <stdio.h>

/**
 * main - it prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}
		lower++;
	}

	putchar('\n');

	return (0);
}
