#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints to std output
 *
 * @filename: Name of file
 * @letters: The number of letters it should read and print
 *
 * Return: A function that reads a text file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a = open(filename, O_RDONLY);
	ssize_t reading;
	ssize_t writing;

	char *buffer;

	buffer = malloc(sizeof(char) * letters);

	if (a == -1)
	{
		return (0);
	}

	if (!buffer)
	{
		close(a);
		return (0);
	}

	writing = read(a, buffer, letters);
	reading = write(STDOUT_FILENO, buffer, writing);

	free(buffer);
	close(a);

	return (reading);
}
