#include "main.h"

/**
 * swap_int - it swaps the value of two integers
 * @a: it's the first parameter
 * @b: it's the second parameter
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
