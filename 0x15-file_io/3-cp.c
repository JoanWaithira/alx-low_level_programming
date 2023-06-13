#include "main.h"

/**
 * create_buffer - A function that allocates 1024 bytes for a buffer
 * @file: The name of buffer
 *
 * Return: New buffer
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - A function that closes the file descriptors.
 * @fd: File descriptors
 *
 * Return: Void
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - A function that copies the contents of a file
 *
 * @argc: Argument count
 * @argv: Argument vector
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int here, there, reading, writing;
	char *buffer;

	buffer = create_buffer(argv[2]);
	here = open(argv[1], O_RDONLY);
	reading = read(here, buffer, 1024);
	there = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from_file_to\n");

		exit(97);
	}
	do {
		if (here == -1 || reading == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writing = write(there, buffer, reading);
		if (there == -1 || writing == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		reading = read(here, buffer, 1024);
		there = open(argv[2], O_WRONLY | O_APPEND);
	}
	while (reading > 0);

	free(buffer);
	close_file(here);
	close_file(there);

	return (0);
}
