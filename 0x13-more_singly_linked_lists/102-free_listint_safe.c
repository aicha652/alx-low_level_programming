#include "lists.h"
/**
 * free_listint_safe - function that frees a list
 * @h: pointer to pointer to the head of a list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *list;
	size_t count;

	if (*h == NULL)
		return (0);
	while (*h != NULL)
	{
		list = *h;
		count++;
		*h = (*h)->next;
		free(list);
	}
	return (count);
}
