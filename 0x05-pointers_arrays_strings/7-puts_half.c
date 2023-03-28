#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: the second half of the str should be print
 * Return: the second half of the string
 */
void puts_half(char *str)
{
size_t i;
i = strlen(str) / 2;
for (; i < strlen(str) && str[i] != '\0'; i++)
{
	printf("%c", str[i]);
}
printf("\n");
}
