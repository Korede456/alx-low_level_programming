#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - it print strings
 * @separator: strings to be printed between strings
 * @n: number of strings to be printed
 * @...: variable number of strings
 * Return: nothing
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%S", str);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(list);
}
