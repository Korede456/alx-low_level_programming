#include "variadic_function.h"

/**
 * sum_them_all - sums all args
 * @n: const
 * @...: variable args
 * Return: 0 or 1
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int i;
		int sum;
		va_list args;
		va-start(args, n);

		sum = 0;
		for (i = 0; i < n; i++)
		{
			int arg - va_arg(args, int);
			sum += arg;
		}
		va_end(args);
		return (sum);
	}
}
