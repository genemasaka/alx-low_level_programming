#include "main.h"
/**
 * binary_to_uint - changes binary num to uint
 * @b: string with the binary number
 * Return: changed number
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int dec_val = 0;
if (!b)
{
return (0);
}
for (i = 0; b[a]; a++)
{
if (b[a] < '0' || b[a] > '1')
{
return (0);
}
dec_val = 2 * dec_val + (b[a] - '0');
}
return (dec_val);
}
