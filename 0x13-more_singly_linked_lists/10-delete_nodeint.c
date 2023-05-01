#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index of a listint_t
 * @head: pointer to pointer to the first node
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1, j;
	int n;
	listint_t *list;
	listint_t *new;
	listint_t *count;

	if (index == 0)
	{
		list = *head;
		*head = list->next;
		free(list);
		n = 1;
	}
	else
	{
		count = *head;
		while (count != NULL)
		{
			j = j + 1;
			count = count->next;
		}
		if (index >= j)
			n = -1;
		else
		{
			list = *head;
			while (i < index)
			{
				list = list->next;
				i++;
			}
			new = list->next;
			list->next = new->next;
			n = 1;
		}
	}
	return (n);
}
