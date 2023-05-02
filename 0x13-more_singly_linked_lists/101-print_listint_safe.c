#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	if (!head)
		exit(98);
	return (count);
}
