#include "holberton.h"

/**
 * create_file - create a file
 * @filename: name of file to create (pointer)
 * @text_content: string to write to file (pointer)
 *
 * Return: -1 if fail, 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int status;

	if (!filename || !text_content)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	status = write(fd, text_content, strlen(text_content));

	if (status == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}
