#include <stdio.h>
#include "main.h"
/**
 * main - prints how many dates are left in a year
 * Return: 0
 */
int main(void)
{
int month, day, year;
month = 2;
day = 29;
year = 2000;
printf("Date: %02d/%02d/%04d\n", month, day, year);
day = convert_day(month, day);
print_remaining_days(month, day, year);
return (0);
}
