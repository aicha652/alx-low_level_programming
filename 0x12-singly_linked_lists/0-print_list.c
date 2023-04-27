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
	unsigned int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil) \n");
		}
		else
		{
			printf("[%d] ", h->len);
			printf("%s \n", h->str);
			n++;
		}
		
		/*printf("[%d] ", h->next->len);
		printf("%s", h->next->str);*/
		h = h->next;
	}
	/*printf("\n");*/
	return (n);
}
