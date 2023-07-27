#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - it print numbers
 * @separator: is to be printed between numbers
 * @n: number of integers passed
 * @...: variable number of arguments
 * Return: nothing
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == (n - 1))
			{
				printf("%d", va_arg(list, int));
			}
			else
			{
				printf("%d%s", va_arg(list, int), separator);
			}
		}
	}
	printf("\n");

	va_end(list);
}