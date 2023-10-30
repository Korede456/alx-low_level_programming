#include "main.h"

/**
 * exit_error - exit error
 * @code: code
 * @fmt: points to fmt
 * @...: variable arguments
 *
 * Return: nothing
 */

void exit_error(int code, const char *fmt, ...);
int main(int argc, char *argv[]);

void exit_error(int code, const char *fmt, ...)
{
	va_list args;

	va_start(args, fmt);
	dprintf(STDERR_FILENO, fmt, args);
	va_end(args);

	exit(code);
}

/**
 * main - main function
 * @argc: argument count
 * @argv: argments
 *
 *Return: 0 always
 */

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;
	char buffer[1024];
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (argc != 3)
	{
		exit_error(97, "Usage: cp file_from file_to\n");
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		exit_error(98, "Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (fd_to == -1)
	{
		exit_error(99, "Error: Can't write to file %s\n", file_to);
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			exit_error(99, "Error: Can't write to file %s\n", file_to);
		}
	}

	if (bytes_read == -1)
	{
		exit_error(98, "Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
	{
		exit_error(100, "Error: Can't close fd %d\n", fd_from);
	}

	if (close(fd_to) == -1)
	{
		exit_error(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}
