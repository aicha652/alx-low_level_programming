#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *list;

	if (head == NULL)
		exit(98);

	list = head;
	while (list != NULL)
	{
		printf("[%p] %d\n", (void *)list, list->n);
		count++;
		list = list->next;
	}
	return (count);
}
