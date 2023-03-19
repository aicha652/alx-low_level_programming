#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char C;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (C = 'a'; C <= 'f'; C++)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
