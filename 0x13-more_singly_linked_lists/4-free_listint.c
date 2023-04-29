#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the first element
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
}
