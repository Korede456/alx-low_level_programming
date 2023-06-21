#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * Return: always return 0
 */

int main(void)
{
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if ((int i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}
		printf("%d\n", sum);

		return (0);
}
