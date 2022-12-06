#include "main.h"
/**
 *read_textfile- reads nlength from a file and writes to the STDOUT
 *@filename:the file
 *@letters: the number of bytes to read
 *
 *Return: the number of bytes actually read  and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (n_read);
}









