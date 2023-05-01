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
	unsigned int i = 1;
	listint_t *new;
	listint_t *list;

	new = malloc((sizeof(listint_t)));

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	else
	{
		list = *head;
		
		while (list && i < idx)
		{
			list = list->next;
			i++;
		}
		if (list == NULL)
			return (NULL);
		new->n = n;
		new->next = list->next;
		list->next = new;
	}
	return (*head);
}
