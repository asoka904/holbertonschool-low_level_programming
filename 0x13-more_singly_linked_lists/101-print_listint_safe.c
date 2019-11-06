#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a listint_t list.
 * @head: First element of a listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0;

	if (head == NULL)
		exit(98);
	for (; head != NULL; count++)
	{
		printf("[%p] %i\n", head->n);
		head = head->next;
	}

	return (count);
}
