#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of string arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, sz_read, sz_write, n, m;
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to"), exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC | 0644);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	sz_read = read(fd1, buff, 1024);
	if (sz_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	sz_write = write(fd2, buff, 1024);
	if (sz_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	n = close(fd1);
	if (n == -1)
	{	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", n), exit(100);
	}
	m = close(fd2);
	if (m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", m), exit(100);
	}
	return (0);
}
