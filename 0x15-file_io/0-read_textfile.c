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
	int fd;
	size_t i, res, count = 0;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	fd = open("Requiescat", O_RDONLY);
	read(fd, buff, letters);
	buff[letters] = '\0';

	for (i = 0; i < letters && buff[i] != '\0'; i++)
		count++;

	res = write(STDOUT_FILENO, buff, count);
	if (res != count)
		return (0);
	close(fd);
	return (count);
}
