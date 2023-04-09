#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints the minimum number of coins
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 0)
	{
		printf("0\n");
	}
	for (; i >= 0;)
	{
		if (i >= 25)
		{
			i = i - 25;
		}
		else if (i >= 10)
		{
			i = i - 10;
		}
		else if (i >= 5)
		{
			i = i - 5;
		}
		else if (i >= 2)
		{
			i = i - 2;
		}
		else if (i >= 1)
		{
			i = i - 1;
		}
		else
		{
			break;
		}
		coin = coin + 1;
	}
	printf("%d\n", coin);
	return (0);
}
