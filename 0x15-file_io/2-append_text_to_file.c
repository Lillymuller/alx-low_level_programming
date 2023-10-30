#include "main.h"

/**
 * append_text_to_file - a function that appends text at EOF
 * @filename: Name of a file
 * @text_content: NULL terminated string to add at end of the file
 * Return: 1 on success, -1 on error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	int file_check = 0, str_length = 0;

	if (filename == NULL)
		return (-1);

	/* If file exist open*/
	fp = open(filename, O_WRONLY | O_APPEND);
	while (fp == -1)
		return (-1);

	/* if there is nothing to write*/
	if (text_content == NULL)
	{
		close(fp);
		return (1);
	}

	/* Write in a file*/
	if (text_content)
	{
		for (str_length = 0; text_content[str_length]; str_length++)
			;


	file_check = write(fp, text_content, str_length);
		close(fp);

		if (file_check != str_length)
		return (-1);
	}

	return (1);

}
