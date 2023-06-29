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

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
