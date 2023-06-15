#include <stdio.h>

/**
 * main - it prints out the size of every data type in the c programming language
 * Return: 0 (success)
 */
int main(void)
{
	printf("The size of char is: %zu byte(s).\n", sizeof(char));
	printf("The size of float is: %zu byte(s).\n", sizeof(float));
	printf("The size of int is: %zu byte(s).\n", sizeof(int));
	printf("The size of long int is:%zu byte(s).\n", sizeof(long int));
	printf("The type of long long int is: %zu byte(s).\n", sizeof(long long int));

	return (0);
}
