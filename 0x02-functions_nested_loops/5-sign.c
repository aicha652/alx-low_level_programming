#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * @n: The character to be checked
 *
 *
 * Return: 1 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar(0 + '0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
_putchar('\n');
}
