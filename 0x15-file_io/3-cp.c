#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

#define BUFFER_SIZE 1024

void error(char *msg, char *file);
void copy_file(char *file_from, char *file_to);

/**
 * error - print an error message and exit with the given error code
 * @msg: the error message format string
 * @file: the file name to include in the error message
 */
void error(char *msg, char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(errno);
}

/**
 * copy_file - copy the content of one file to another
 * @file_from: the name of the source file
 * @file_to: the name of the destination file
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t num_read, num_written;

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error("Error: Can't read from file %s\n", file_from);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		error("Error: Can't write to %s\n", file_to);
	}

	while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);
		if (num_written != num_read)
		{
			error("Error: Can't write to %s\n", file_to);
		}
	}
	if (num_read == -1)
	{
		error("Error: Can't read from file %s\n", file_from);
	}

	if (close(fd_from) == -1)
	{
		error("Error: Can't close fd %d\n", file_from);
	}

	if (close(fd_to) == -1)
	{
		error("Error: Can't close fd %d\n", file_to);
	}
}

/**
 * main - copy the content of one file to another
 * @argc: the number of command-line arguments
 * @argv: an array of strings containing the command-line arguments
 * Return: 0 on success, 97-100 on error
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];

	copy_file(file_from, file_to);

	return (0);
}
