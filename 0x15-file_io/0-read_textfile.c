#include "main.h"

/**
 * read_textfile - read the content of a file to stdout
 * @filename: name of the file to be read
 * @letters: number of characters in the file
 *
 * Return: number of bytes read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t bytesRead, bytesWritten;
	char *buffer;

	if (!filename)
		return (0);
	fp = fopen(filename, "r");
	if (!fp)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
	{
		fclose(fp);
		return (0);
	}
	bytesRead = fread(buffer, 1, letters, fp);
	if (bytesRead == -1)
	{
		free(buffer);
		close(fp);
		return (0);
	}
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	free(buffer);
	fclose(fp);
	if (bytesWritten == -1 || bytesWritten != bytesRead)
		return (0);
	return (bytesRead);
}
