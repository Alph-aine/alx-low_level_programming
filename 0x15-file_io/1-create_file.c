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
 *create_file- creates a file, if filename already exists
 *truncates file and do not change permissions
 *
 *@filename: the filename
 *@text_content:the content to write to file
 *Return: 1 on success, else -1
 */


int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
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
		return (-1);
		close(fd);
	}

	close(fd);
	return (1);

}








