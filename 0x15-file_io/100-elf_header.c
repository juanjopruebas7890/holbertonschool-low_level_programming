#include "holberton.h"
/**
 * closes_file - Will close a file.
* @fil: variable.
* Return: 0.
*/
void closes_file(int fil)
{
	if (close(fil) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot close fd %d\n", fil);
		exit(98);
	}
}
/**
 * check_file - Will check for the elf content.
 * @rem: variable
 * Return: 0
 */
void check_file(unsigned char *rem)
{
	int t;

	for (t = 0; t < 4; t++)
		if (rem[t] != 127 && rem[t] != 'E' &&
		    rem[t] != 'L' && rem[t] != 'F')
			dprintf(STDERR_FILENO, "Error: Not ELF file\n"),
				exit(98);
}
/**
 * print_magic - Will print the numbers of elf.
 * @magic: Variable
 * Return: 0
 */
void print_magic(unsigned char *magic)
{
	int w;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (w = 0; w < EI_NIDENT; w++)
	{
		printf("%02x", magic[w]);
		w == EI_NIDENT - 1 ? printf("\n") : printf(" ");
	}
}
/**
 * print_class - Will print the elf class.
 * @class: variable.
 * Return: 0.
 */
void print_class(unsigned char *class)
{
	printf("  Class:                             ");
	switch (class[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", class[EI_CLASS]);
	}
}
/**
 * print_data - Will print the data.
 * @data: variable
 * Return: 0
 */
void print_data(unsigned char *data)
{
	printf("  Data:                              ");

	switch (data[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", data[EI_CLASS]);
	}
}
/**
 * print_version - Will print the version file.
 * @version: variable
 * Return: 0.
 */
void print_version(unsigned char *version)
{
	printf("  Version:                           %d",
	       version[EI_VERSION]);

	switch (version[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}
/**
 * print_os_abi - Will print the osabi file.
 * @o_a: varible.
 * Return: 0.
 */
void print_os_abi(unsigned char *o_a)
{
	printf("  OS/ABI:                            ");

	switch (o_a[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
	printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", o_a[EI_OSABI]);
	}
}
/**
 * print_abi - Will print the abi version.
 * @abi: variable
 * Return: 0.
 */
void print_abi(unsigned char *abi)
{
	printf("  ABI Version:                       %d\n",
	       abi[EI_ABIVERSION]);
}
/**
 * print_type - Will print the elf type file.
 * @type: variable.
 * @class: variable
 * Return: 0.
 */
void print_type(unsigned int type, unsigned char *class)
{
	if (class[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", type);
	}
}
/**
 * print_entry - Will print the entry.
 * @entry: variable.
 * @class: variable
 * Return: 0.
 */
void print_entry(unsigned long int entry, unsigned char *class)
{
	printf("  Entry point address:               ");

	if (class[EI_DATA] == ELFDATA2MSB)
	{
		entry = ((entry << 8) & 0xFF00FF00) |
			((entry >> 8) & 0xFF00FF);
		entry = (entry << 16) | (entry >> 16);
	}

	if (class[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry);

	else
		printf("%#lx\n", entry);
}
/**
 * main - Wil show the info in the elf file.
 * @ac: variable
 * @av: variable.
 * Return: 0.
 */
int main(int argc, char **argv)
{
	Elf64_Ehdr *header;
	int op, rd;

	if (argc != 2 || argv[1] == NULL)
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n",
			argv[0]), exit(98);
	op = open(argv[1], O_RDONLY);
	if (op == -1)
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n",
			argv[1]), exit(98);
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL) 
	{
		dprintf(STDERR_FILENO, "Error: No memory allocated for %s\n",
			argv[1]);
		closes_file(op), exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		printf("Error: Cannot read file %s\n", argv[1]);
		free(header), closes_file(op), exit(98);
	}
	check_file(header->e_ident);
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_os_abi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	closes_file(op);
	return (0);
}
