#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s : the string to be reverse
 * Return: void
 */
void rev_string(char *s)
{
	size_t i;
	
	for (i = strlen(s) - 1; i <= strlen(s); i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
