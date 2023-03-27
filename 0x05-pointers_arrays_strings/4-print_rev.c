#include "main.h"
#include <stdio.h>
/**
 * print_rev - function that prints a string in reverse
 * @s: the string to print
 * Return: void
 */
void print_rev(char *s)
{
size_t i;

for (i = strlen(s) - 1; i <= strlen(s); i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}
