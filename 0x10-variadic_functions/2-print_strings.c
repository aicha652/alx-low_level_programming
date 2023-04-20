#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: number of strings
 * Return: prints strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *tmp;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		tmp = va_arg(list, char*);
		printf("%s", tmp ? tmp : "(nil)");
		if (separator && n < i - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
