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
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	} else if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	} else
	{
		 printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
