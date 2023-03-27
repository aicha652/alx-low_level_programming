#include "main.h"
/**
 * print_line - function that adraws a straight line in the terminal
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
int i;

if (n > 0)
{
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
else
{
	_putchar('\n');
}
}
