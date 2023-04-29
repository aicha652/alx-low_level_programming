#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *list;
	while (head != NULL)
	{
		list = head;
		free(head);
		head = list->next;
	}
}
