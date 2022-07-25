#include "main.h"
/**
 * main - duplicates content of a file to another file
 * @argc: num of arguments passed
 * @argv: a double pointer
 * Return: actual number of letters to read and write
 */
int main(int argc, char **argv)
{
int f1;
int f2;
int n;
char buf[1024]
if (argc != 3)
{
dprintf(SRDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
f1 = open(argv[1], O_RDONLY);
if (f1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
f2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY < 0664);
while ((n = read(f1, buf, 1024)) > 0)
{
if (write(f2, buf, n) != n || f2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (n == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(f1) < 0)
{
dprintf(STDERR_FILENO, "Erro: Can't close fd %d\n", f1);
exit(100);
}
if (close(f2) < 0)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
exit(100);
}
return (0);
}
