#include "main.h"

/**
 * create_file -> Function that create file
 * @filename: name of file created
 * @text_content: content of text
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	FILE *file = fopen(filename, "w");
	fputs(text_content, file);

	if (filename == NULL)
		return (-1);
	return (1);
	fclose(file);
}
