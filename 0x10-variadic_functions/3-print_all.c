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
	char *sep;
	va_list args;
	int f_index;

	f_index = 0;

	va_start(args, format);
	while (format[f_index])
	{
		switch (format[f_index])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c%s", c, sep);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d%s", i, sep);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f%s", f, sep);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				printf("%s%s", s, sep);
				break;
			default:
				f_index++;
				continue;
		}
		sep = ", ";
		f_index++;
	}
	printf("\n");
	va_end(args);
}
