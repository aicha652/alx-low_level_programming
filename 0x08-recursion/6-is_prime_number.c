#include "main.h"
/**
 * is_prime_number - function returns 1 if the integer is a prime number
 * @n: int
 * Return: 1 if it is a prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11)
	{
		return (1);
	}
	else if (n == 4 || n == 6 || n == 8 || n == 9 || n == 10 || n == 12)
	{
		return (0);
	}
	else if(n % 4 == 0 || n % 6 == 0 || n % 8 == 0)
	{
		return (0);
	}
	else if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 9 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
