#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer to the pointer to the first node of the list
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}
	(*head) = NULL;
}
