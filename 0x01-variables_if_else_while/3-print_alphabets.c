#include <stdio.h>
/*
 * main - Entry point
 *
 * Return: Always(0) Success
 */
int main(void)
{
	char C;
	for (C = 'a'; C <= 'z'; C++)
		putchar(C);
	for (C = 'A'; C<= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
