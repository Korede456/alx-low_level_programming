#include "variadic_functions.h"

/**
 * print_all - it prints multiple formats
 * @format: formats
 * @...: variable args
 * Return: void
 */

void print_all(const char * const format, ...);

void print_all(const char * const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	va_list args;
	int f_index;

	f_index = 0;

	va_start(args, format);
	while (format[f_index])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		f_index++;

		if (format[f_index] != '\0')
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
