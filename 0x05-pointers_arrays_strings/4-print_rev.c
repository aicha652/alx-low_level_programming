#include "main.h"
/**
 * print_rev - function that prints a string, in reverse, followed by a new line
 *
 * @s: the string to be reverse
 */
void print_rev(char *s)
{
	size_t i;

	for (i = strlen(s); i <= strlen(s); i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
