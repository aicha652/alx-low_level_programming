#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s: the string to be reverse
 */
void rev_string(char *s)
{
	size_t i;
	char c;

	for (i = strlen(s) - 1; i <= strlen(s);)
	{
		c = s[i];
		printf("%c", c);
		i--;
	}
	printf("\n");
}
