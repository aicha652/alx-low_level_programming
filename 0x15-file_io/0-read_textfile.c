#include "main.h"
/**
 * read_textfile -  function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * @letters: the number of letters it should read and print
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, close_fd;
	char *buff;
	ssize_t sz_read, sz_write;

	if (filename == NULL)
		return (0);

	fd = open("Requiescat", O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
		return (0);

	sz_read = read(fd, buff, letters);
	if (sz_read == -1)
	{
		return (0);
	}
	sz_write = write(STDOUT_FILENO, buff, sz_read);
	if (sz_write == -1 || sz_write != sz_read)
	{
		return (0);
	}
	close_fd = close(fd);
	free(buff);
	if (close_fd == -1)
		return (0);
	return (sz_read);
}
