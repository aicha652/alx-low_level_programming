#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: Multiplication
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc <= 2)
	{
		printf("Error\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul = mul * strtol( argv[i], NULL, 10);
		}
		printf("%d\n", mul);
	}
	return (0);
}
