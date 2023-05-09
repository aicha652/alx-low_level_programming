#include "main.h"
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
	size_t len;

	buff = malloc(sizeof(char));
	fd = open(av[1], O_RDONLY);

	len = strlen(buff);

	sz_read = read(fd, buff, len);

	if (ac > 3)
	{
		exit(97);
		dprintf(2, "Usage: cp file_from file_to\n");
	}
	/*if (av[2])
	{
		fdw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		sz_write = write(fdw, buff, len);
	}*/
	if (!av[1])
	{
		exit(98);
		dprintf(2, "Error: Can't read from file NAME_OF_THE_FILE\n");
	}
	fdw = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
        sz_write = write(fdw, buff, len);
	if (sz_write == -1 || sz_read == -1)
	{
		exit(99);
		dprintf(2, "Error: Can't write to NAME_OF_THE_FILE\n");
	}

	close(fd);
	close(fdw);
	return (0);
}
