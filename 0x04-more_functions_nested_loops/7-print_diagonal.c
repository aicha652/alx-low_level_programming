#include "main.h"
/**
 * print_diagonal - function that adraws a diagonal line on the terminal
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
int i, j;

if (n > 0)
{
        for (i = 1; i <= n; i++)
        {
		for (j = 1; j <= n; j++)
		{
			if (j == i)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
        }
}
else
{
        _putchar('\n');
}
}
