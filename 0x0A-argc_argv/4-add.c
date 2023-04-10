#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers
 * @argc: number of line comman arguments
 * @argv: array of size argc
 * Return: addition
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc <= 1)
{
	printf("0\n");
}
else
{
	for (i = 1; i < argc; i++)
	{
		char *c;

		sum = sum + strtol(argv[i], &c, 10);
		if (c == argv[i])
		{
			printf("Error\n");
			return (1);
		}
		else if (argv[i] < 0)
		{
			exit (EXIT_FAILURE);
		}
	}
	printf("%d\n", sum);
}
return (0);
}
