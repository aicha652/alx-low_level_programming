#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: The character to be checked
 * isalpha ( function that checks for alphabetic character
 *
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
if (isalpha(c))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
