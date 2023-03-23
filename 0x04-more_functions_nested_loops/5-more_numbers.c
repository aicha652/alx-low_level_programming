#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14
 *
 * Return: numbers from 0 to 14 10 times
 */
void more_numbers(void)
{
int i;
int j;

for (i = 1; i <= 10; i++)
{
	for (j = 0; j < 15; j++)
	{
		if (j > 9)
		{
			_putchar((j / 10) + '0');
		}
		_putchar((j % 10) + '0');
	}
	putchar('\n');
}
}
