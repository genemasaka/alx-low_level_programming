#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/*more headers go there */

/**
*main - generates random number
*and finds its last digit. It then
*prints out different messages for
*depending on its value
*
*Return: Always 0 (Success)
*/

int main(void)

{

int n;
int ldon;

srand(time(0));


n = rand() - RAND_MAX / 2;

/* your code goes there */

ldon = n % 10;
if (ldon > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, ldon);
} else if (ldon == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, ldon);
} else if (ldon < 6 && ldon != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldon);
}

return (0);

}
