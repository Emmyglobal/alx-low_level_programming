#include "main.h"
#include <elf.h>

/**
 * main ->  program that displays the information contained in the ELF header.
 * @argc: number of arguments passed
 * @argv: double pointer
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filenme", argv[0]);
		exit(98);
	}
	int fd = open(argv[1], O_RDONLY);
	if (fd = -1)
	{
		printf(stderr, "Error: failed to open file '%s : %sn', argv[1]", strerror(errno));
		exit(98);
	}
	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		fprintf(stderr, ""Error Failed to read ELF header: %sn, strerror(errno));
	exit(98);
}
