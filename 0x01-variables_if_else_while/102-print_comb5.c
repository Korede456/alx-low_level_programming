#include <stdio.h>

/**
 * main - it prints all possible different combinations of two two digits
 * Return: always 0
 */

int main(void)
{
        int i;
        int j;

        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
			putchar('0' + i);
			putchar('0' + j);
			putchar(',');
			putchar(' ');
                }
        }

        putchar('\n');

        return (0);
}
