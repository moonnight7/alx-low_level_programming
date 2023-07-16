#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0
 *
 * The essence is to print lowercase alphabets
*/
int main(void)
{
	char a;
	for (a = 'a'; a <= 'z'; a++)
		putchar(a);
	putchar('\n');

	return (0);
}
