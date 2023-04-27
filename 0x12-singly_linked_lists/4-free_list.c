#include "lists.h"
/**
 * free_list - function that frees a list_t
 * @head the list
 * Return: 0
 */
void free_list(list_t *head)
{
	free(head);
}
