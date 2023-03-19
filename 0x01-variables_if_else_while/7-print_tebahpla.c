#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C;

	for (C = 'z'; C >= 'a'; C--)
	{
		putchar(C);
	}
	putchar('\n');
	return (0);
}
