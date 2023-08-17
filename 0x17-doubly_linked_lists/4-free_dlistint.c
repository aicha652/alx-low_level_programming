#include "lists.h"
/**
 * free_dlistint -  function that frees a dlistint_t list
 * @head: head of a list
 * Return: void function
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *link;

	while (head != NULL)
	{
		link = head;
		head = head->next;
		free(link);
	}
}
