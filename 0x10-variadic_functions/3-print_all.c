#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: format of the argument
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list args;
	va_start(args, format);

	while(format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				printf("%s", va_arg(args, char*));
			}
			else if (format[i] == 's')
			{
				printf("%s", va_arg(args, char*));
			}
			else if (format[i] == 'i')
			{
				printf("%d", va_arg(args, int));
			}
			else if (format[i] == 'f')
			{
				printf("%f", va_arg(args, double));
			}
		}
		else
		{
			printf("%s", va_arg(args, char*));
		}
	}
	printf("\n");
	va_end(args);
}
