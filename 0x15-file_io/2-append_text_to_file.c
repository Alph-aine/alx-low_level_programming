#include "main.h"

/**
 *_strlen- finds the length of a string
 *@str: the string
 *Return: the length
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 *append_text_to_file- appends text to an existing file
 *terminates if file is not existing
 *
 *@filename: the name of the file to append to
 *@text_content: the content to append to the file
 *
 *Return: 1 on success, else -1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_EXCL | O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	n_write = write(fd, text_content, _strlen(text_content));
	if (n_write == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
