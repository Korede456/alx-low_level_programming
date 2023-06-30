#include "main.h"

/**
 * string_toupper - it changes all lowercase letters of
 * @string: the string to be checked
 * Return: returns a char value
 */

char *string_toupper(char *str)
{
	char *string = str;

	while (*string != '\0')
	{
		if (*string <= 'z' && *string >= 'a')
			*string = *ptr - 'a' + 'A';
		string++;
	}
	return (str);
}
