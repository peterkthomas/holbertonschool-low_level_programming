#include "holberton.h"

/**
 * append_text_to_file - add text to end of file
 * @filename: name of file
 * @text_content: string to write to file
 *
 * Return: 1 success, -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int status;

	if (!filename)
		return (-1);

	if(!text_content)
		text_content = "";

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	status = write(fd, text_content, strlen(text_content));
	close(fd);

	if (status == -1)
		return (-1);

	return (1);
}
