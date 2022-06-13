#include "main.h"
/**
*rev_string - prints reversed string to stdout
*@s: A pointer to an int value that will be updated
*Return: void
*/

void rev_string(char *s)
{
char *start_c;
char *c;
char *end_c;
int i;
int count;
int length = 0;
for (i = 0; s[i]; i++)
{
length++;
}
count = length;
start_c = s;
end_c = s;
for (i = 0; i < count - 1; i++)
{
end_c++;
}
for (i = 0; i < count / 2; i++)
{
char *c = *end_c;
*end_c = *start_c;
*start_c = *c;
start_c++;
end_c--;
}
}
