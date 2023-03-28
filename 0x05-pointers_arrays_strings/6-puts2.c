#include "main.h"
/**
 * puts2 - function that prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	size_t i;

	for (i = 0; i < strlen(str); i = i+2)
	{
		printf("%u", str[i]);
	}
}
