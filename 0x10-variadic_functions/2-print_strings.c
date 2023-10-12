#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: const 1
 * @n: num of args
 * @...: variadic args
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *arg;
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char*);
		if (arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arg);
		}

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
