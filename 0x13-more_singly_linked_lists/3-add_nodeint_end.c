#include "lists.h"
/**
 * *add_nodeint_end - function that adds a new node at the end of a list
 * @head: list
 * @n: integer to be added
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head && (*head)->next == NULL)
		(*head)->next = new;
	else if (*head && (*head)->next != NULL)
	{
		listint_t *list;

		list = *head;
		while (list->next != NULL)
		{
			list = list->next;
		}
		list->next = new;
	}
	else
		*head = new;

	return (*head);
}
