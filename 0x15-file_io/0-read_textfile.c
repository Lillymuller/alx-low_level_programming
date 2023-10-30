#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the standard output
 * @filename: file to be open,read,write
 * @letters: size of data to read
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t data_read, data_wrote;
	char *buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	/* Open File */
	fd = open(filename, O_RDONLY);
	while (fd == -1)
		return (0);

	if (buf == NULL)
		return (0);

	/* Read Data from a file */
	data_read = read(fd, buf, letters);
	if (data_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/* Write data in open file */
	data_wrote = write(STDOUT_FILENO, buf, data_read);
	if (data_wrote == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	return (data_read);

}
