#include "main.h"
/**
  *print_elf_header - displays the elf header file
  *E16f4_Ehdr : macros
  *return: always 0
  */

typedef struct Elf64_Ehdr;

void print__elf_header(Elf64_Ehdr *elf_header) 
{
  
	printf("Magic: %02x\n", elf_header->e_ident[EI_MAG0]);
	printf("Magic: %02x\n", elf_header->e_ident[EI_MAG1]);
	printf("Magic: %02x\n", elf_header->e_ident[EI_MAG2]);
	printf("Magic: %02x\n", elf_header->e_ident[EI_MAG3]);
  printf("Class: %d\n", elf_header->e_ident[EI_CLASS]);
  printf("Data: %d\n", elf_header->e_ident[EI_DATA]);
  printf("Version: %d\n", elf_header->e_ident[EI_VERSION]);
  printf("OS/ABI: %d\n", elf_header->e_ident[EI_OSABI]);
  printf("ABI Version: %d\n", elf_header->e_ident[EI_ABIVERSION]);
  printf("Type: %d\n", elf_header->e_type);
  printf("Entry point address: %lx\n", elf_header->e_entry);
}

int main(int argc, char *argv[]) 
{

  if (argc != 2) {
    fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
    exit(98);
  }

  int fd = open(argv[1], O_RDONLY);

  if (fd == -1) {
    perror("open");
    exit(98);
  }

  Elf64_Ehdr elf_header;
  lseek(fd, 0, SEEK_SET);
  read(fd, &elf_header, sizeof(Elf64_Ehdr));

  if (elf_header.e_ident[EI_MAG0] != ELFMAG0 || elf_header.e_ident[EI_MAG1] != ELFMAG1 || elf_header.e_ident[EI_MAG2] != ELFMAG2 || elf_header.e_ident[EI_MAG3] != ELFMAG3) {
    fprintf(stderr, "%s is not an ELF file\n", argv[1]);
    exit(98);
  }

  print_elf_header(&elf_header);

  close(fd);

  return 0;
}
