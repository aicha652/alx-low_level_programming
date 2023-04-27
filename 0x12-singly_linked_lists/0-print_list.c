#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: poinet to the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int i, j, n = 0, s = 1;

	/*if (h->str == NULL)
	{
		printf("[0] (nil)");
	}*/
	
	for (i = 0; i < h->len; i++)
	{
	}
	if (h->str == NULL)
	{
		printf("[0] (nil) \n");
		n++;
	}
	else
	{
		printf("[%d] ", i);
		printf("%s \n", h->str);
		n++;
	}

	for( j = 0; j < h->next->len; j++)
	{
	}
	printf("[%d] ", j);
	printf("%s", h->next->str);
	s = s + n;

	printf("\n");
	return (s);
}
