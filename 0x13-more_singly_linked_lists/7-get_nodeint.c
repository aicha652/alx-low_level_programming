#include "lists.h"
/**
 * *get_nodeint_at_index - function that returns the nth node of a listint_t
 * @head: pointer to pointer to the first node of the listint_t
 * @index: index of the node
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		head = head->next;
		i++;
	}
	if (i != index)
		return (NULL);
	return (head);
}
