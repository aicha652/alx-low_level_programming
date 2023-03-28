#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: the character to be print
 * Return: void
 */
void puts2(char *str)
{
while (*str != '\0')
{
	if (*str % 2)
	{
		printf("%c", *str);
		puts2(++str);
	}
	else
	{
		puts2(++str);
	}
}
puts2(++str);
printf("\n");
}
