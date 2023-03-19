#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for(; i < 10;)
	{
		if(i != 9)
		{
			putchar('0' + i);
			putchar(',');
		        putchar(' ');
			i++;
		}
		else
		{
			putchar('0' + i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
