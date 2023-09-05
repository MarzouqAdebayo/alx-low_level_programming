#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 if succesful and -1 if not
*/

int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return -1;

	int file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		ssize_t bytes_written = write(file, text_content, strlen(text_content));

		if (bytes_written == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
