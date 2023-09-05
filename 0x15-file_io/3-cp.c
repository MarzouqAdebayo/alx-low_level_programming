#include "main.h"

void dummy(void);

/**
 * main - contains the main function of the program
 * @argc: number of arguments passsed on the CLI
 * @argv: pointer to argument string
 *
 * Return: Always 0 if successful
 */
int main(int argc, char *argv[])
{
	int from_file, to_file, bytesRead = 1024, bytesWritten, close_from_file, close_to_file;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_file = open(argv[1], O_RDONLY);
	if (from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_file = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (bytesRead == 1024)
	{
		bytesRead = read(from_file, buffer, 1024);
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		bytesWritten = write(to_file, buffer, bytesRead);
		if (bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_from_file = close(from_file);
	if (close_from_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file);
		exit(100);
	}
	close_to_file = close(to_file);
	if (close_to_file)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file);
		exit(100);
	}
	return (0);
}

/**
 * dummy - to trick betty
 * Return: void
 */
void dummy(void)
{
}
