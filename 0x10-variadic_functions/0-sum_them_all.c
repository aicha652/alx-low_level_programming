#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: variable
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg (ap, int);
	}
	va_end (ap);
	return sum;
}
