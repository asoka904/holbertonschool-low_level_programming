#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: First element of a listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	for (; h != NULL; count++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (count);
}
