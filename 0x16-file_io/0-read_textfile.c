#include "holberton.h"

/**
 * read_textfile - read text file and print
 * @filename: string of file name
 * @letters: number of characters to output
 * 
 * Return: Number of characters read, 0 at EOF
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int total = 0;
	int written;
	char *buffer;

	if (!filename || !letters)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(buffer);
		return (0);
	}

	total = read(fd, buffer, letters);

	if (total == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	written = write(STDOUT_FILENO, buffer, total);

	free(buffer);
	close(fd);

	if (written != total)
		return (0);

	return (written);
}
