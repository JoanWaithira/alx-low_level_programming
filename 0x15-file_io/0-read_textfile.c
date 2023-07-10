#include "main.h"

/**
 * read_textfile - A function that reads a text file and prints it
 * @filename: The file in question
 * @letters: The number of letters it should read and print
 * Return: Always 0 (Success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t reading;
	ssize_t writing;
	ssize_t file;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	reading = read(file, buffer, letters);
	if (reading == -1)
	{
		free(buffer);
		close(file);
		return (0);
	}
	writing = write(STDOUT_FILENO, buffer, reading);
	if (writing == -1 || writing != reading)
	{
		free(buffer);
		close(file);
		return (0);
	}

	free(buffer);
	close(file);
	return (writing);
}
