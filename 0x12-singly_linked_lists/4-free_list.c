#include "lists.h"
/**
 * free_list - function that frees a list_t
 * @head: the list
 * Return: 0
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
	}
	while (head != NULL)
	{
		free(head->str);
		/*free(head->len);*/
		head = head->next;
	}
}
