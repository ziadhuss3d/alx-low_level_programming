#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - entry point
 * description: display infos of the ELF files
 * @argc: args numbers
 * @argv: args array
 * Return: if success 0
 */
int main(int argc, char *argv[])
{
	int frwd;
	Elf64_Ehdr *header;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	frwd = open(argv[1], O_RDONLY);
	if (frwd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]), exit(98);

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
		dprintf(STDERR_FILENO, "Error: malloc failed\n"), exit(98);
	if (read(frwd, header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
	    header->e_ident[EI_MAG1] != ELFMAG1 ||
	    header->e_ident[EI_MAG2] != ELFMAG2 ||
	    header->e_ident[EI_MAG3] != ELFMAG3)
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n"), exit(98);

	printf("ELF Header:\n");
	printf("  Magic:   %02x %02x %02x %02x\n",
	       header->e_ident[EI_MAG0], header->e_ident[EI_MAG1],
	       header->e_ident[EI_MAG2], header->e_ident[EI_MAG3]);
	printf("  Class:                             %s\n",
				header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              %s\n",
				header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("  OS/ABI:                            %s\n",
				header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "UNIX - System V");
	printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:                              %s\n",
				header->e_type == ET_EXEC ? "EXEC (Executable file)" : "EXEC (Executable file)");
	printf("  Entry point address:               0x%lx (bytes into file)\n", header->e_entry);
	printf("  Start of program headers:          %ld (bytes into file)\n", header->e_phoff);
	printf("  Start of section headers:          %ld (bytes into file)\n", header->e_shoff);
	printf("  Flags:                             0x%x\n", header->e_flags);
	printf("  Size of this header:               %d (bytes)\n", header->e_ehsize);
	printf("  Size of program headers:           %d (bytes)\n", header->e_phentsize);
	printf("  Number of program headers:         %d\n", header->e_phnum);
	printf("  Size of section headers:           %d (bytes)\n", header->e_shentsize);
	printf("  Number of section headers:         %d\n", header->e_shnum);
	printf("  Section header string table index: %d\n", header->e_shstrndx);

	if (close(frwd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close frwd %d\n", frwd), exit(98);

	return (0);
}
