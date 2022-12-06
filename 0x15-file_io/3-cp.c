#include "main.h"
/**
 *__exit- prints appropriate error message to the stderr
 *@error: the error code
 *@s: the name of file
 *@fd:file descriptor
 *Return: 0
 */
int __exit(int error, char *s, int fd)
{
	switch (error)
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
		dprintf(STDERR_FILENO, " Can't close fd %d\n", fd);
		exit(error);
	default:
		return (0);

	}
}

/**
 *main- Entry point into the program
 *@argc: should be  3
 *@argv: argv[1] = src, file to copy from
 *argv[2] = dest, file to copy to
 *
 *Return: 0 on success, exit(97-100)
 */

int  main(int argc, char *argv[])
{
	int src, dest, n_read, n_write;
	char *buffer[1024];
	/* checks if src and dest are present */
	if (argc != 3)
		__exit(97, NULL, 0);
	/* creating dest file */
	dest = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (dest == -1)
		__exit(99, argv[2], 0);

	/* opening src file */
	src = open(argv[1], O_RDONLY);
	if (src == -1)
		__exit(98, argv[1], 0);

	/* reads from src file and writes in to the dest file */
	while ((n_read = read(src, buffer, 1024)) != 0)
	{
		if (n_read == -1)
			__exit(98, argv[1], 0);

		n_write = write(dest, buffer, n_read);
		if (n_write == -1)
			__exit(99, argv[2], 0);
	}

	/* checks if file descriptors can't be closed */
	close(dest) == -1 ? (__exit(100, NULL, dest)) : close(dest);
	close(src) == -1 ? (__exit(100, NULL, src)) : close(src);
	return (0);
}

