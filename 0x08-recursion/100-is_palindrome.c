
#include "main.h"

int check_palindrome(char *s, int i, int length);

/**
 * is_palindrome - entry point
 * @s: input string
 * Return: an integer
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (check_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * check_palindrom - entry point
 * @s: string to check
 * @i:entry 2
 * @length: string length
 * Return: integer always
 */

int check_palindrome(char *s, int i, int length)
{
	if (*(s + i) != *(s + length))
	{
		return (0);
	}
	if (i >= length)
	{
		return (1);
	}
	return (check_palindrome(s, i + 1, lenght-1));
}
