#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char C = 'a';

	for (; C <= 'z'; )
	{
		if (C != 'e' || C != 'q')
		{
			putchar(C);
			C++;
		}
		else
		{
			C++;
		}
	}
	putchar('\n');
	return (0);
}	
