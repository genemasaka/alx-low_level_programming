#include "main.h"
#include <stdio.h>
/**
 *main -encodes a string into 1337
 *Return: Always 0
 */
int main(void)
{
char s[] = "Expect the best. Preare for the worst. Capitalize on what comes.\n";
char *p;
p = leet(s);
printf("%s", p);
printf("%s", s);
return (0);
}
