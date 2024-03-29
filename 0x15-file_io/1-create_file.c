#include "main.h"
/**
 * create_file -  function that creates a file
 * @filename: the name of the file to create
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, sz_write;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		sz_write = write(fd, text_content, strlen(text_content));
		if (sz_write == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
