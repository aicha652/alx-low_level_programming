#include "lists.h"
/**
 * *add_node_end - function that adds a new node at the end of a list_t
 * @head: the list
 * @str: str to be added
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if ((*head) == NULL)
		*head = new;
	else
	{
		list_t *list = *head;

		while (list->next != NULL)
		{
			list =	list->next;
		}
		list->next = new;
	}
	return (new);
}
