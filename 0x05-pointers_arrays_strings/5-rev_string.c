#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s : the string to be reverse
 * Return: void
 */
void rev_string(char *s)
{
int i;

for (i = strlen(s) - 1; i >= 0;)
{
	if (i == 0)
	{
		printf("%c", s[i]);
		break;
	}
	else
	{
		printf("%c", s[i]);
		i--;
	}
}
}
