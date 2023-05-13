#include "main.h"
#include <stdio.h>


/**
 * read_textfile -> Function that reads a text file and prints it to the POSIX standard output.
 * @filename: Pointer to the file name.
 * @letters: number of letter it could read or print
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fread, fwrite;
	char *totalSize;
	FILE *file;

	totalSize = malloc(sizeof(char) * letters);
	if (totalSize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = fopen(filename, O_RDONLY);

	if (file == -1)
		return (0);
	fread = read(file, totalSize, letters);
	if (fread == -1)
		return (0);
	fwrite = write(STDOUT_FILENO, totalSize, fread);
	if (fwrite == -1)
		return (0);
	close(file);
	free(totalSize);
	return (fwrite);
}
