#include "main.h"

/**
 * binary_to_uint - converts binary to un-int
 * @b: binary to be converted
 * Return: type unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	result = 0;
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = (result << 1) | ([i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
