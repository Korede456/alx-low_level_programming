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
	va_list list;
	unsigned int i;
	int sum;

	sum = 0;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	return (sum);

	va_end(list);
}
