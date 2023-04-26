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

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					printf("%s", va_arg(args, char*));
					break;
				case 's':
					printf("%s", va_arg(args, char*));
					break;
				case 'i':
					printf("%d", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				default:
					printf("Error");
					break;
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
