#include "main.h"

/**
 * create_file - A function that creates a file
 *
 * @filename: The name of file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success , -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int length = 0;
	int writing;
	int file;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (; text_content[length];)
			length++;
	}
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}
	writing = write(file, text_content, length);
	if (writing == -1)
	{
		close(file);
		return (-1);
	}
	close(file);
	return (1);

}
