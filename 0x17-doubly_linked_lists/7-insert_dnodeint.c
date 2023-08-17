#include "lists.h"
/**
 * *insert_dnodeint_at_index - function that inserts a new node at index
 * @h: head of a list
 * @idx: the index of the new node
 * @n: the element of the node to be added
 * Return: the address of the new node,or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *link, *prev_list, *list;
	unsigned int i = 1, count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h == NULL)
		return (NULL);
	else if (*h && idx == 0)
		add_dnodeint(&*h, n);
	else
	{
		list = *h;
		while (list != NULL)
		{
			count += 1;
			list = list->next;
		}
		if (idx <= count)
		{
			link = (*h);
			while (link && i < idx)
			{
				link = link->next;
				i += 1;
			}
			new->n = n;
			new->next = link->next;
			if (new->next == NULL)
				new->prev = link;
			else
			{
				link->next = new;
				prev_list = new->next;
				prev_list->prev = new;
				new->prev = link;
			}
		}
		else
			return (NULL);
	}
	return (*h);
}

