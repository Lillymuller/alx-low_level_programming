#include "main.h"

/**
 * __exit - checks the error argument and prints a corresponding
 *error message to the standard error stream
 *@error: An integer value representing the error code
 *If the error code is zero, then the program is exiting normally.
 * @s: A string containing an error message
 * @fd: file descriptor
 * Return: 0 on success
 **/
int __exit(int error, char *s, int fd) /* exit() parameter */
{
	/* switch execute different code blocks based on value of a variable */
	switch (error)  /* exit clean up resources befor the program exits */
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - Copy file from on file to another
 * @argc: the argument count should be 3
 * @argv: Copy file from , Copy file to
 * Return: 0 (success), else 97-100 (exit with errors)
 */
int main(int argc, char *argv[])
{
	int copy_from, copy_to, read_data, write_data;
	char *buffer_size[1024];

	if (argc != 3)
		__exit(97, NULL, 0); /* program exits with displaying error 97 */

	/* File to copy to*/
	copy_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (copy_to == -1)
		__exit(99, argv[2], 0);

	/* File to copy from*/
	copy_from = open(argv[1], O_RDONLY);
	if (copy_from == -1)
		__exit(98, argv[1], 0);

	/*reads original file as long as there's more than 0 to read*/
	/*copies/writes contents into new file */
	while ((read_data = read(copy_from, buffer_size, 1024)) != 0)
	{
		if (read_data == -1)
			__exit(98, argv[1], 0);

		write_data = write(copy_to, buffer_size, read_data);
		if (write_data == -1)
			__exit(99, argv[2], 0);
	}

	close(copy_to) == -1 ? (__exit(100, NULL, copy_to)) : close(copy_to);
	close(copy_from) == -1 ? (__exit(100, NULL, copy_from)) : close(copy_from);
	return (0);
}
