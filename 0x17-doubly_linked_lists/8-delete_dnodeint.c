#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes
 * the node at index index of a dlistint_t linked list
 * @head: head of the list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *link, *list, *sec_list;
	unsigned int i = 1;

	if (*head  == NULL)
		return (-1);
	if (index == 0)
	{
		link = (*head);
		(*head) = (*head)->next;
		free(link);
		return (1);
	}
	link = *head;
	while (link && i < index)
	{
		link = link->next;
		i += 1;
	}
	list = link->next;
	link->next = list->next;
	sec_list = link->next;
	sec_list->prev = link;
	free(list);
	return (1);
}
