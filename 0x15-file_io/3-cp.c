#include "main.h"

/**
 * print_error - Prints error message
 * @msg: Pointer to the message to be printed
 * @file_name: Pointer to the file
 */
void print_error(const char *msg, const char *file_name)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", msg, file_name);
}

/**
 * main - Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exit on failure
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	char buffer[1024];
	ssize_t bytes_written, bytes_read;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to", "");
		return (EXIT_FAILURE);
	}
	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		print_error("Can't read from file", argv[1]);
		return (EXIT_FAILURE);
	}
	to_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (to_fd == -1)
	{
		print_error("Can't write to file", argv[2]);
		close(from_fd);
		return (EXIT_FAILURE);
	}
	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Can't write to file", argv[2]);
			close(from_fd);
			close(to_fd);
			return (EXIT_FAILURE);
		}
	}
	if (bytes_read == -1)
	{
		print_error("Can't read from file", argv[1]);
		close(from_fd);
		close(to_fd);
		return (EXIT_FAILURE);
	}
	if (close(to_fd) == -1)
	{
		print_error("Can't close file descriptor", argv[2]);
		close(from_fd);
		return (EXIT_FAILURE);
	}
	if (close(from_fd) == -1)
	{
		print_error("Can't close file descriptor", argv[1]);
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
