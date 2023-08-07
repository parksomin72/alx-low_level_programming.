#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Reads and prints a text file to the standard output.
 * @filename: Name of the file to read.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);
FILE *file = fopen(filename, "r");
if (file == NULL)
return (0);
char *buffer = (char *)malloc(letters + 1); /* +1 for null-terminator*/
if (buffer == NULL)
{
fclose(file);
return (0);
}
ssize_t total_read = 0;
ssize_t bytes_read;
while (total_read < (ssize_t)letters)
{
bytes_read = fread(buffer, sizeof(char), letters - total_read, file);
if (bytes_read <= 0)
break;
buffer[bytes_read] = '\0'; /*Null-terminate the buffer*/
printf("%s", buffer);
total_read += bytes_read;
if (bytes_read < (ssize_t)(letters - total_read))
break; /* End of file reached*/
}
free(buffer);
fclose(file);
return (total_read);
}
