#include <stdio.h>

/**
 * main - it prints out the size of every data type in
 *	the c programming language
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char is: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int is: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
