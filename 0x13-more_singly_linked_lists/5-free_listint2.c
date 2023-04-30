#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	while (*head != NULL)
	{
		list = *head;
		*head = (*head)->next;
		(void)list;
		list = NULL;
	}
}
