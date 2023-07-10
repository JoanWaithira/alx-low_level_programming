#include "main.h"

/**
 * append_text_to_file - A function that appends text at the end of a file
 *
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of a line
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int length = 0;
	int file;
	int writing;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (; text_content[length];)
		{
			length++;
		}
	}
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}
	writing = write(file, text_content, length);
	if (writing == -1)
	{
		return (-1);
	}
	close(file);
	return (1);
}
