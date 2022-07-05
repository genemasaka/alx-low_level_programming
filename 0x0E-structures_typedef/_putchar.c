#include <unistd.h>
/**
 * _putchar - writes a character to stdout
 * @c: character to be written
 * Return: on success 1, fail -1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
