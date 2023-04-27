#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked
 * @h: linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int n = 0;

	if (h == NULL)
	{
		return (0);
	}
	else
	{
		while (h != NULL)
		{
			n++;
			h = h->next;
		}
	}
	return (n);
}
