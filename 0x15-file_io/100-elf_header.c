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
	{
		fprintf(stderr, ""Error Failed to read ELF header: %sn, strerror(errno));
	exit(98);
	}
	if (memcmp(header.e_idnt, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Error: NOT an ELF filen");
		exit(98);
	}
	printf(" Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf(" Class: %sn" header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :  "ELF32");
	printf(" Data: %sn", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf(" Version: %d (current)n", header.e_ident[EI_VERSION]);
	printf(" OS/ABI: %sn", header.e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf(" ABI Version: %dn", header.e_ident[EI_ABIVERSION]);
	printf(" Type: %sn", header.e_type == ET_EXEC ? "EXEC (Executable file)" : (header.e_type == ET_DYN ? "DYN (Shared object file)" : "Other"));
	printf(" Entry point address: 0x%lxn", header.e_entry);

	close(fd);

	return 0;
}
