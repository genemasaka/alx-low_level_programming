#include "main.h"
/**
 * read_textfile - reads a text file and writes it to POSIX stdout
 * @filename: A pointer to a file
 * @letters: num of letters
 * Return: the number of letters to read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t file, fread, fwrite;
char *totSize;
totSize =  malloc(sizeof(char) * letters);
if (totSize == NULL)
{
return (0);
}
if (filename == NULL)
{
return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
return (0);
}
fread = read(file, totSize, letters);
if (fread == -1)
{
return (0);
}
fwrite = write(STDOUT_FILENO, totSize, fread);
if (fwrite == -1)
{
return (0);
}
close(file);
free(totSize);
return (fwrite);
}
