#include <stdio.h>
/**
 * main - entry point
 *
 * return: alway returns 0
 *
 * this will combine many prints
 */
int main(void)
/* the value here is a possible combination */
{
	int i;
	int j;

	for (i = 10; i <= 19; i++)
	{
		for (j = 10; j <= 19; j++)
		{
			if ((j % 10) > (i % 10))
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (i != 18 || j != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}

	putchar('\n');
	return (0);
}
