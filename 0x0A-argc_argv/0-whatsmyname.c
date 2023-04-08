#include <stdio.h>
/**
 * main - program that prints its name followed by a new line
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
