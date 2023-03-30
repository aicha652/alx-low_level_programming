#include "main.h"
/**
 * string_toupper - function that changes lowercase letters to uppercase
 * @str: string
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
size_t i = 0;

for (; i < strlen(str);)
{
	str[i] = toupper(str[i]);
	i++;
}
return (str);
}
