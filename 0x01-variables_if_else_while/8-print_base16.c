#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
*/
int main(void)
{
	unsigned char a = '0';
	int z;

	for (z = 0; z < 10; z++)
	{
		putchar(a);
		a++;
	}
	z = '1';
	for (z = 0; z < 6; z++)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');

	return (0);
}
