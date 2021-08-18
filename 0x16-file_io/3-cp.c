#include "holberton.h"

/* prototypes */
void can_read(int status, char *filename);
void can_write(int status, char *filename);

/**
 * main - copies source file to destination file
 * @argc: argument number
 * @argv: argument variables
 *
 * Return: 0 success, 97 incorrect argc, 98 can't read, 99 can't write
 *		100 can't close file descriptor
 */
int main(int argc, char *argv[])
{
	int fd_src;
	int fd_dst;
	int r_status;
	int w_status;
	int read_length = 1024;
	int written;
	int buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_src = open(argv[1], O_RDONLY);
	can_read(fd_src, argv[1]);

	fd_dst = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	can_write(fd_dst, argv[2]);

	while (read_length == 1024)
	{
		read_length = read(fd_src, buffer, 1024);
		can_read(read_length, argv[1]);
		written = write(fd_dst, buffer, read_length);
		if (read_length != written)
			written = -1;
		can_write(written, argv[2]);
	}

	r_status = close(fd_src);
	w_status = close(fd_dst);

	if (r_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_src);
		exit(100);
	}

	if (w_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_dst);
		exit(100);
	}

	return (0);
}


/**
 * can_read - checks if file can be read
 * @status: -1 for false
 * @filename: name of source file
 */
void can_read(int status, char *filename)
{
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * can_write - checks if file can be written
 * @status: -1 for false
 * @filename: name of source file
 */
void can_write(int status, char *filename)
{
	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}
