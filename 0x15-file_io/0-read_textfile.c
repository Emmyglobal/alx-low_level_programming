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
	FILE *filename;
	filename = fopen(filename, "r", "w");

	if (file == NULL)
		return (0);

	fclose(*filename);
}
