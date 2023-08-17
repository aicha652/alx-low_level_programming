#include "lists.h"
/**
 * print_dlistint - function that prints all the
 * elements of a dlistint_t list
 * @h: list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0, elem;

	while (h != NULL)
	{
		count += 1;
		printf("%d\n", elem = h->n);
		h = h->next;
	}
	return (count);
}
