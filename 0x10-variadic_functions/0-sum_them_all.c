#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all args
 * @n: number of args
 * @...: variable number of args
 * Return: success
 **/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list list;

	va_start(list, n);

	unsigned int i;
	int sum;

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	return (sum);

	va_end(list);
}
