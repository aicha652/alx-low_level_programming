#include "lists.h"
/**
 * *get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list
 * @head: head of a list
 * @index: index of the node
 * Return: the node or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

if (head == NULL)
	return (NULL);
while (i < index)
{
	head = head->next;
	i++;
}
return (head);
}
