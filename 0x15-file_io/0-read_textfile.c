#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of file
 * @letters: is the number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t sz_read, sz_write;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	sz_read = read(fd, buff, letters);
	if (sz_read == -1)
	{
		close(fd);
		return (0);
	}

	sz_write = write(STDOUT_FILENO, buff, letters);
	if (sz_write == -1)
	{
		close(fd);
		return (0);
	}

	free(buff);
	close(fd);
	return (sz_write);
}
