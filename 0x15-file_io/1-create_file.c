#include "main.h"

/**
 * create_file - creat new file with permission
 * @filename: New file name
 * @text_content:a NULL terminated string to write to the file
 * Return: 1 on success, -1 on error
 */
int create_file(const char *filename, char *text_content)
{
	int new_file, str_length = 0;
	int data_write;

	while (filename == NULL)
		return (-1);

	/* create new file with permissions if doesn't exist and truncate */
	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (new_file == -1)
		return (-1);

	/* If ther is nothing to write*/
	else if (text_content == NULL)
	{
		close(new_file);
		return (1);
	}

	/* Write in a file */
	data_write = write(new_file, text_content, text_content[str_length]);
	if (data_write == -1 || data_write != text_content[str_length])
			{
		close(new_file);
		return (-1);
	}

	close(new_file);
	return (1);
	}
