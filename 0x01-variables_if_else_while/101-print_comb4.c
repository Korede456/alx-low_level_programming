#include <stdio.h>

/**
 * main - it prints all possible different combinations of three digits
 * Return: always 0
 */

int main(void)
{
        int i;
        int j;
	int k;

        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
			for (k = 0; k < 10; k++)
			{
                        	if (k > j && j > i)
                        	{
                                	putchar('0' + i);
                                	putchar('0' + j);
					putchar('0' + k);
                                	putchar(',');
                                	putchar(' ');
				}
                        }
                }
        }

        putchar('\n');

        return (0);
}
