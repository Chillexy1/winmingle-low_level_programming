#include "main.h"

/*
*Author: Chillexy Steven    
*
* Program: WinMingle Community C Training
*
*Description: ELF_HEADER PROGRAM : this program displays information contained in the ELF header at the start of an ELF file
*/

int main(int argc, char *argv[])
{
	int fd,i, k = 0;
	unsigned char buffer[16];
	unsigned char magic[4] = {0x7f,'E','L','F'};
	ssize_t read_size;
	Elf64_Ehdr header64;
	Elf32_Ehdr header32;


	if (argc != 2)  /*handles arguments counts */
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	/* open elf_filename, and checks if it didn't fail*/
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: cannot open file %s\n", argv[1]);
		exit(98);
	}

	/* read the first 16 bytes of the ELF header*/
	read_size = read(fd, buffer, 16);
	/*check if read file isn't empty  */
	if (read_size != 16)
	{
		fprintf(stderr, "Error: cannot read ELF header\n");
		close(fd);
		exit(98);
	}

	/* check if the file is not an ELF file */
	for (i = 0; i < 4; i++)
	{
		if (buffer[i] != magic[i])
		{
			fprintf(stderr, "Error: Not an ELF file\n");
			close(fd);
			exit(98);
		}
	}

	/* check if theres no error ELF class to work with */
	if(buffer[EI_CLASS] != ELFCLASS32 && buffer[EI_CLASS] != ELFCLASS64)
	{
		fprintf(stderr, "Error: Invalid ELF class\n");
		close(fd);
		exit(98);
	}

	/* use the one lseek restriction given */
	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		fprintf(stderr, "Error: cannot seek file\n");
		close(fd);
		exit(98);
	}


	/*decide the class to flow with ELF32 or ELF64*/
	if (buffer[EI_CLASS] == ELFCLASS32)
	{
		read_size = read(fd, &header32, sizeof(header32));
		if (read_size != sizeof(header32))
		{
			fprintf(stderr,"Error: cannot read ELF file\n");
			close(fd);
			exit(98);
		}
		
		printf("ELF Header:\n");
		
		/* Magic information */
		printf("Magic: ");

		while (k < 16)
		{
			printf("%02x",header32.e_ident[k]);
			k++;
		}
		printf("\n");

		printf("Class:			ELF32\n");

		/* Data information for ELF32*/
		if (header32.e_ident[EI_DATA] == ELFDATA2LSB)
			printf("Data:			2's complement, little endian\n");
		else if (header32.e_ident[EI_DATA] == ELFDATA2MSB)
			printf("Data:			2's complement, big endian\n");
		else
		{
			fprintf(stderr,"Error: Invalid ELF data encoding\n");
			close(fd);
			exit(98);
		}

		/* ELF Version information for ELF32*/
		if (header32.e_ident[EI_VERSION] == EV_CURRENT)
			printf("Version:		1 (current)\n");
		else{
			fprintf(stderr,"Error, not an ELF version file\n");
			close(fd);
			exit(98);
		}

		/* OS/ABI(application binary interface) for ELF32 OS information */
		if (header32.e_ident[EI_OSABI] == ELFOSABI_SYSV)
			printf("OS/ABI:			UNIX - System V\n");

		/* ABI Version for ELF32*/
		printf("ABI Version:		%d\n", header32.e_ident[EI_ABIVERSION]);

		/* check abd implement e_type data for ELF32 */
		if (header32.e_type == ET_NONE)
			printf("Type:			NONE (None)\n");
		else if (header32.e_type == ET_EXEC)
			printf("Type:			EXEC (Executable file)\n");
		else if (header32.e_type == ET_REL)
			printf("Type:			REL (Relocatable file)\n");
		else if (header32.e_type == ET_DYN)
			printf("Type:			DYN (Shared object file)\n");
		else if (header32.e_type == ET_CORE)
			printf("Type:			CORE (Core file)\n");

		/* ELF32 entry point */
		printf("Entry point address:	0x%x\n", header32.e_entry);

	}

	else
	{
		read_size = read(fd, &header64, sizeof(header64));
		if (read_size != sizeof(header64))
		{
			fprintf(stderr,"Error: cannot read ELF file\n");
			close(fd);
			exit(98);
		}

		printf("ELF Header:\n");

		/* magic information */
		printf("Magic: ");

		while (k < 16)
		{
			printf("%02x ",header64.e_ident[k]);
			k++;
		}
		printf("\n");


		printf("Class:			ELF64\n");

		/* Data information for ELF64*/
		if (header64.e_ident[EI_DATA] == ELFDATA2LSB)
			printf("Data:			2's complement, little endian\n");
		else if (header64.e_ident[EI_DATA] == ELFDATA2MSB)
			printf("Data:			2's complement, big endian\n");
		else
		{
			fprintf(stderr, "Error: Invalid ELF data encoding\n");
			close(fd);
			exit(98);
		}

		/* ELF Version information for ELF64*/
		if (header64.e_ident[EI_VERSION] == EV_CURRENT)
			printf("Version:		1 (current)\n");
		else{
			fprintf(stderr,"Error, not an ELF version file\n");
			close(fd);
			exit(98);
		}

		/* OS/ABI(application binary interface) for ELF64  OS information */
		if (header64.e_ident[EI_OSABI] == ELFOSABI_SYSV)
			printf("OS/ABI:			UNIX - System V\n");

		/* ABI Version for ELF64*/
		printf("ABI Version:		%d\n", header64.e_ident[EI_ABIVERSION]);

		/* check abd implement e_type data for ELF64 */
		if (header64.e_type == ET_NONE)
			printf("Type:			NONE (None)\n");
		else if (header64.e_type == ET_EXEC)
			printf("Type:			EXEC (Executable file)\n");
		else if (header64.e_type == ET_REL)
			printf("Type:			REL (Relocatable file)\n");
		else if (header64.e_type == ET_DYN)
			printf("Type:			DYN (Shared object file)\n");
		else if (header64.e_type == ET_CORE)
			printf("Type:			CORE (Core file)\n");
	
		/* ELF64 entry point */
		printf("Entry point address:	0x%lx\n", header64.e_entry);


	}



	close(fd);
	
	return (0);
}
