#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: print the square
 */
void print_square(int size)
{
	int i = 1;
	int j;

	if (size > 0)
	{
		if (size == 1)
		{
			_putchar('#');
			_putchar('\n');
		}
		else
		{
			for (;i <= size; i++)
			{
				for (j = 1; j <= size;)
				{
					_putchar('#');
					j++;
				}
				_putchar('\n');
				continue;
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
		
