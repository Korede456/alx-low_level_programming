#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	char *appName = argv[0];

	printf("%s\n", appName);

	return (0);
}
