#include "main.h"

/**
 * append_text_to_file -> appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminating string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY, 0644);
	if (fd == NULL)
		return (-1);
	close(fd);
	return (1);
}
