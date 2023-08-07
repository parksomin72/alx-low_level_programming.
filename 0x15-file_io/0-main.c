#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point of the program
 * @ac: Number of command-line arguments
 * @av: Array of command-line argument strings
 *
 * Return: Always 0.
 */
ssize_t read_textfile(const char *filename, size_t letters);
int main(int ac, char **av)
{
ssize_t n;
if (ac != 2)
{
dprintf(2, "Usage: %s filename\n", av[0]);
exit(1);
}
n = read_textfile(av[1], 114);
printf("\n(printed chars: %li)\n", n);
n = read_textfile(av[1], 1024);
printf("\n(printed chars: %li)\n", n);
return (0);
}
