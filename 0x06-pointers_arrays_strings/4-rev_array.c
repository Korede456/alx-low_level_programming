#include "main.h"

/**
 * reverse_array - it reverses the content of an array
 * @a: is the array to be reversed
 * @n: is the numbe of elements contained in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int result[n];

	i = n - 1;
	j = 0;

	while (i <= 0)
	{
		result[j] = a[i];
		j++;
		i--;
	}
	a = result;
}
