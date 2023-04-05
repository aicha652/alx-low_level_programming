#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: number
 * Return: factoriel of a given number
 */
int factorial(int n)
{
	int fact = 1, i = 1;
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		while (i <= n)
		{
			fact = fact * i;
			i++;
		}
	}
	return (fact);
}

