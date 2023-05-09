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
	int fd, fdw, sz_read, sz_write;
	char *buff;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	buff = malloc(BUFFER_SIZE);
	sz_read = read(fd, buff, BUFFER_SIZE);
	if (fd == -1 || sz_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fdw = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	sz_write = write(fdw, buff, BUFFER_SIZE);
	if (fdw == -1 || sz_write == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fdw) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fdw);
		exit(100);
	}
	close(fd);
	close(fdw);
	return (0);
}
