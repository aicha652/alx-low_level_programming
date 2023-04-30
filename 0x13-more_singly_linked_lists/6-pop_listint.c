#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * and returns the head node’s data (n)
 * @head: pointer to pinter to the first node of the list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *list;
		int m;

		list = *head;
		*head = (*head)->next;
		m = list->n;
		free(list);
		return (m);
	}
	return (0);
}
