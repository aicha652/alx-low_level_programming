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

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	write(fd, filename, letters);
	if (filename == NULL)
		return (0);
	close(fd);
	return (letters);
}
