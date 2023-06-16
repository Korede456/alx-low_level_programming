#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - it prints the last number of a randomly
 *	generated integer
 * Return: 0 (success)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 3;
	l = abs(n % 10);

	if (n < 0)
	{
		n *= -1;
	};

	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l < 6 || l < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}

	return (0);
}
