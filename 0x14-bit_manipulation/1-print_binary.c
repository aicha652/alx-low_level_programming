#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: number to be converted to binary
 * Return: prints the binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else if (n == 1)
		_putchar('1');
}
