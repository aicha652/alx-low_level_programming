#include "main.h"
/**
 * *argstostr - fucntion that concatenates all th arguments
 * @ac: number of arguments
 * @**av: arguments
 * Return: concatenate arguments
 */
char *argstostr(int ac, char **av)
{
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
