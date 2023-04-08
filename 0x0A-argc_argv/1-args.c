#include <stdio.h>
/**
 * main - program that prints the number of arguments
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc;)
	{
		i++;
	}
	(void)argv;
	printf("%d\n", i - 1);

	return (0);
}
