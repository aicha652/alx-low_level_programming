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
		exit(97);
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
	}

	fd1 = open(argv[1], O_RDONLY);

	if (fd1 == -1)
	{
		exit(98);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC | 0644);

	if (fd2 == -1)
	{
		exit(99);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	}

	sz_read = read(fd1, buff, 1024);
	if (sz_read == -1)
	{
		exit(98);
                dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	}

	sz_write = write(fd2, buff, 1024);
	if (sz_write == -1)
	{
		exit(99);
                dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	}
	n = close(fd1);
	if (n == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
	}
	m = close(fd2);
	if (m == -1)
	{
		exit(100);
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", m);
	}
	return (0);
}
