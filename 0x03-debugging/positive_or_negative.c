#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int positive_or_negative(int n)
{

/* your code goes there */
if (n > 0)
{printf("%d is positive\n", n); }
if (n < 0)
{printf("%d is negative\n", n); }
if (n == 0)
{printf("%d is zero\n", n); }
return (0);
}
