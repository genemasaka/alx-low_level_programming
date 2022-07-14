#include <stdio.h>
/**
 * bmain - function run before main
 * Return: void
 */
void __attribute__((constructor)) bmain()
{
printf("You're beat! and yet, you must allow");
printf(",\nI bore my house upon my back!\n");
}
