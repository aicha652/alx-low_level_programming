#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the number whose last digit we will print
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
int d;
if (n > 0)
{
d = n % 10;
_putchar(d + '0');
}
else if (n == 0)
{
_putchar(n + '0');
}
else
{
d = -n % 10;
_putchar(d + '0');
}
return (0);
}
