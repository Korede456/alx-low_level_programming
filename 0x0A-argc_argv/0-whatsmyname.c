#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 */

void main(int argc __attribute__((unused)), char *argv[])
{
	char *programName = argv[0];

	printf("%s\n", programName);
}
