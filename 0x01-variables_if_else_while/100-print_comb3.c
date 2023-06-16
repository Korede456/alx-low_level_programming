#include <stdio.h>

/**
 * main - it prints all possible different combinations of three digits
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);

		j = 0;
		while (j < 10 && j > i)
		{
			putchar('0' + j);

			if (j < 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
	}

	putchar('\n');

	return (0);
}
