#include "main.h"

/**
 * string_toupper - it changes all lowercase letters of
 * @string: the string to be checked
 * Return: returns a char value
 */

char *string_toupper(char *string)
{
	while (*string != '\0')
	{
		if (*string <= 'z' || *string >= 'a')
			*string = ((char) (*string - 32));
		string++;
	}
	return (string);
}
