#include "lists.h"
#include<stdlib.h>
#include <string.h>
/**
 * *add_node - function that adds a new node at the beginning of a list_t
 * @head: the list
 * @str: string to be added
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (0);
}
