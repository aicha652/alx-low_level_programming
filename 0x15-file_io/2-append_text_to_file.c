#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: the name of the file
 * @text_content: text to be added at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (text_content != NULL)
	{
		size_t len = strlen(text_content);
		size_t byte_written = write(fd, text_content, len);

		if (byte_written != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
