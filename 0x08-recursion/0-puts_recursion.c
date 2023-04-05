#include "main.h"
/**
 * _puts_recursion - function that prints a string
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i = 0;

	i = puts(s);

	_putchar(i);
}
