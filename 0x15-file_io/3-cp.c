#include "main.h"
#define BUFFER_SIZE 1024
/**
 * main - program that copies the content of a file to another file
 * @ac: number of command line argument
 * @av: array of size of ac
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int fd, fdw, sz_read, sz_write, close_f;
	char *buff;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	buff = malloc(BUFFER_SIZE);
	if (buff == NULL)
		return (0);
	sz_read = read(fd, buff, BUFFER_SIZE);
	if (fd == -1 || sz_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdw = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	sz_write = write(fdw, buff, sz_read);
	if (fdw == -1 || sz_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	close_f = close(fd);
	if (close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	close_f = close(fdw);
	if (close_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fdw %d\n", fdw);
		exit(100);
	}
	free(buff);
	return (0);
}
