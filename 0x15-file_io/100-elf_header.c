#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_class - Prints the class of an ELF header.
 * @e_ident: A pointer to an array containing the ELF class.
 */
void print_class(unsigned char *e_ident)
{
    printf(" Class: ");
    switch (e_ident[EI_CLASS])
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
            printf("<unknown: %x>\n", e_ident[EI_CLASS]);
            break;
    }
}


/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
int main(int argc, char *argv[])
{
    Elf64_Ehdr header; /* Use a struct directly, no need to allocate dynamically*/
    int o, r;
    
    if (argc != 2) /* Check for correct usage*/
    {
        fprintf(stderr, "Usage: %s <elf_file>\n", argv[0]);
        return (1);
    }

    o = open(argv[1], O_RDONLY);
    if (o == -1)
    {
        perror("Error");
        return (98);
    }

    r = read(o, &header, sizeof(Elf64_Ehdr));
    if (r == -1)
    {
        perror("Error");
        close(o);
        return (98);
    }

    check_elf(header.e_ident);
    
    printf("ELF Header:\n");
    print_magic(header.e_ident);
    print_class(header.e_ident);
    /* Call other print functions here*/
    close(o);
    return (0);
}
