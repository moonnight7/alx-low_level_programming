#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
*/
int main(void)
{
	int n = 0;

	for (; n < 10; n++)
		putchar('0' + n);
	putchar('\n');

	return (0);
}
