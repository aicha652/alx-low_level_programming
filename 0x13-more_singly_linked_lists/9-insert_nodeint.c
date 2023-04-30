#include "lists.h"
/**
 * *insert_nodeint_at_index -  function that inserts a new node
 * at a given position
 * @head: pointer to pointer to the first node
 * @idx: the index of the list where the new node should be added
 * @n: integer to be added
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;

	while (i < idx)
	{
		(*head) = (*head)->next;
		i++;
	}
	if (!*head)
		return (NULL);
	new = malloc((sizeof(listint_t)));
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
