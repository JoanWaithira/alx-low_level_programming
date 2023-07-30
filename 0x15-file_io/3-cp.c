#include "main.h"

char *creating_buffer(char *file);
void closing_file(int file);

/**
 * creating_buffer - A function that creates a buffer
 * @file: Name of file
 *
 * Return: Pointer to the newly allocated byffer
 */

char *creating_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		fprintf(stderr, "Error, Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * closing_file - A function that closes the file
 * @file: To be closed
 */
void closing_file(int file)
{
	int a;

	a = close(file);

	if (a == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - A function that copies the contents of a file to another file.
 * @argc: argument count
 * @argv: argment vector
 *
 * Return: Always 0 (Success).
 *
 * Description: Different exit codes as required
 */
int main(int argc, char *argv[])
{
	int start;
	int end;
	int reading;
	int writing;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = creating_buffer(argv[2]);
	start = open(argv[1], O_RDONLY);
	reading = read(start, buffer, 1024);
	end = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (start == -1 || reading == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		writing = write(end, buffer, reading);
		if (end == -1 || writing == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		reading = read(start, buffer, 1024);
		end = open(argv[2], O_WRONLY | O_APPEND);

	} while (reading > 0);

	free(buffer);
	closing_file(start);
	closing_file(end);

	return (0);
}

