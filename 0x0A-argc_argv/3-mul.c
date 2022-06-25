#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main - calculates and prints product of ints
 *@argc: argumnet counter
 *@argv: array of arguments
 *Return: Always 0
 */
int main(int argc, char *argv[])
{
int m, p;
if (argc == 3)
{
m = atoi(argv[1]);
p = atoi(argv[2]);
printf("%d\n", m *p);
return (0);
}
printf("Error\n");
return (1);
}
