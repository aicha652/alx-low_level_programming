#include "main.h"
/**
 * main - program that copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of string arg
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, sz_read, sz_write, m, n;
char buff[1024];

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
if (fd_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
sz_read = read(fd_from, buff, 1024);
if (sz_read == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
}

sz_write = write(fd_to, buff, sz_read);
if (sz_write == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}
m = close(fd_from);
if (m == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_from), exit(100);
}
n = close(fd_to);
if (n == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_to), exit(100);
}
return (0);
}
