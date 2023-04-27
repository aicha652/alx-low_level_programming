#include "lists.h"
/**
 * *add_node_end - function that adds a new node at the end of a list_t
 * @head: the list
 * @str: str to be added
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	if (*head == NULL)
		return (NULL);
	(*head)->str = (char *)str;
	(*head)->len = strlen(str);
	(*head) = (*head)->next;

	return (*head);
}
