#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints it to the POSIX standard output
 * @filename: pointer to the file name
 * @letters: the number of letters it should read and print
 * Return: the number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	size_t i, count = 0;
	char *buff[1024];

	if (filename == NULL)
		return (0);

	for (i = 0; i < strlen(*buff) && *buff[i] != '\0'; i++)
	{
		fd = open("Requiescat", O_RDONLY);
		read(fd, buff[i], 1024);
		printf("%s", *buff);
		count++;
	}
	letters = count;

	return (letters);
}
