#include "main.h"
/**
 * main - program that multiples two positive numbers
 * @num1: first number
 * @num2: second number
 * Return:the result of multiplication
 */
int main (int argc, char *argv[])
{
	int i, mul = 1;
	/*mul = malloc(sizeof(num) * sizeof(num2) * sizeof(int));*/

	for (i = 1; i < argc; i++)
	{
		mul = mul * strtol(argv[i], NULL, 10);
	}
	printf ("%d\n", mul);
	return (0);
}
