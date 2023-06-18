#include <stdio.h>

/**
 * main - it prints all possible different combinations of two two digits
 * Return: always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 100; 1++)
	{
		for (j = 0; j < 100; 1++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
