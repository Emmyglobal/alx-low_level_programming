#include "main.h"

/**
 * append_text_to_file -> Function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to be added
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;

	file = open(filename, O_APPEND | O_RDWR);
	if (file == -1)
		return -1;

	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	else
		return (-1);
	
	close(file);
	return (1);
}
