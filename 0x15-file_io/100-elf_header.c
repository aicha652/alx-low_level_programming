#include "main.h"
#include <elf.h>
/**
 * main - program that displays the information contained
 * ine the ELF at the start of an ELF file
 * @argc: number of arguments
 * @argv: array of string arg
 * Return: 0
 */
typedef struct
{
        uint8_t e_ident[16];
        uint16_t e_type;
        uint32_t e_entry;
}ELFHEADER;

int main(int argc, char *argv[])
{
	int fd, sz_read, i;
	ELFHEADER elf;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error!\n");
		exit(98);
	}

	sz_read = read(fd, &elf, sizeof(elf));
	if (sz_read == -1)
	{
		fprintf(stderr, "Error!\n");
		exit(98);
	}
	if (elf.e_ident[EI_MAG0] != ELFMAG0 ||
			elf.e_ident[EI_MAG1] != ELFMAG1 ||
			elf.e_ident[EI_MAG2] != ELFMAG2 ||
			elf.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "the file is not an ELF file\n");
		exit(98);
	}
	printf("Magic:  ");
	for (i = 0; i < 16; i++)
		printf("%02x ", elf.e_ident[i]);
	printf("\nClass:                           ");
	printf("%s\n", elf.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              ");
	printf("%s\n", elf.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           ");
	printf("%u\n", elf.e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	printf("%u\n", elf.e_ident[EI_OSABI]);
	printf("ABI Version:                       ");
	printf("%u\n", elf.e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	printf("%u\n", elf.e_type);
	printf("Entry point address:               ");
	printf("%#010x\n", (unsigned int)elf.e_entry);
	return (0);
}
