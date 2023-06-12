#include "main.h"

/**
 * create_file - A function that creates a file
 *
 * @filename: The name of file to create
 *
 * @text_context: a NULL terminated string to write a file
 *
 * Return: Always 0 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int a;
	int b;
	int length;

	if (filename == NULL)
	{
		return (-1);
	}

	length = 0;

	if (text_content != NULL)
	{
		for(; text_content[length]; length++);
	}
	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (a == -1)
	{
		return (-1);
	}

	b = write(a, text_content, length);

	if (b == -1)
	{
		return (-1);
	}

	close(a);

	return 1;
}


