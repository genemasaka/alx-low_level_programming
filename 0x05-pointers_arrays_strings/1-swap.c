#include "main.h"

/**
*swap_int - swap the values of a and b
*@a: pointer to an int to be swapped
*@b: pointer to an int to be swapped
*Return: void
*/

void swap_int(int *a, int *b)
{
int e;

e = *a;
*a = *b;
*b = e;
}
