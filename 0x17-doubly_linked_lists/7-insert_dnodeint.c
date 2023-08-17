#include "lists.h"
/**
 * *insert_dnodeint_at_index - function that
 * inserts a new node at a given position
 * @h: head of a list
 * @idx: the index of the new node
 * @n: the element of the node to be added
 * Return: the address of the new node,
 * or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *link;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
		add_dnodeint(&*h, n);
	else
	{
		link = (*h);
		while (*h && i < idx)
		{
			link = link->next;
			i += 1;
		}
		new->n = n;
		new->next = link->next;
		link->next = new;
		new->prev = link;
	}
	return (*h);
}

