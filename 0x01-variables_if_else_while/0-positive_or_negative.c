#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 *
 * this project wil enable operators
 *
 *  Thit project prints the out put of operators
*/
int main(void)
/* this is the main subject of this project */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* this code samples the operators */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);

	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
