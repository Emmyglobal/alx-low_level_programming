#include "main.h"
#include <string.h>

/**
 * create_file -> Function that create file
 * @filename: name of file created
 * @text_content: content of text
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, fwrite, len;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++);
		fwrite = write(file, text_content,len);
		if (fwrite == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
