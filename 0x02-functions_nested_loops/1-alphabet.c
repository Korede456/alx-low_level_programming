#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print all alphabets in lowercase
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}

