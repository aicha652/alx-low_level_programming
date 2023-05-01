#include "lists.h"
/**
 * *reverse_listint - function that reverses a linked list
 * @head: pointer to pointer to the first node
 * Return:  pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *new = NULL;

	while (*head != NULL)
	{
		new = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = new;
	}
	*head = old;

	return (*head);
}
