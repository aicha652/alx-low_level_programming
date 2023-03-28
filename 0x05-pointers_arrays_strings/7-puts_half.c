#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: the second half of the str should be print
 * Return: the second half of the string
 */
void puts_half(char *str)
{
	char c;
	if  (strlen(str) > 1)
	{
		c = ((strlen(str) - 1) / 2);
		printf("%c", c);
	}
	else if ( strlen(str) == 1)
	{
		printf("%s", str);
	}
}
