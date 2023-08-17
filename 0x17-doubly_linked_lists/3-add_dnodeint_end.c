#include "lists.h"
/**
 * *add_dnodeint_end - function that adds a
 * new node at the end of a dlistint_t list
 * @head: head of a list
 * @n: the element of a node to be added
 * Return: the address of the new element,
 * or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *link;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		link = *head;
		while (link->next != NULL)
		{
			link = link->next;
		}
		new->n = n;
		new->next = NULL;
		link->next = new;
		new->prev = link;
	}
	return (*head);
}
