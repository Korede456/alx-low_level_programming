#include <stdio.h>

/**
 * main - it prints all possible combinations of single-digit numbers
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 9)
		{
			putchar('0' + num);
		}
		else
		{
			putchar('0' + num);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
