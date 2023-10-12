#include "variadic_functions.h"

/**
 * print_numbers - It prints numbers
 * @separator: const arg
 * @n: const arg
 * @...: variable args
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n,
		...)
{
	unsigned int i;
	int arg;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		printf("%d", arg);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
