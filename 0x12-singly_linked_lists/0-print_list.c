#include "lists.h"
#include <stdlib.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
	{
		return (n);
	}
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s \n", h->len, h->str);
		}
		n++;
		h = h->next;
	}
	return (n);
}
