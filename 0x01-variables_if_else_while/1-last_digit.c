#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 *
 * The essence is to test the randomness of the programme
*/

int main(void)
/* the random description will help this programme to run */
{
	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;

	if (lastn > 5)
	{
		printf("last digit of %d and %d is greater than 5\n", n, lastn);
	} else if (lastn == 0)
	{
		printf("last digit of %d and %d is 0\n", n, lastn);
	} else
	{
		 printf("last digit of %d and %d is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
