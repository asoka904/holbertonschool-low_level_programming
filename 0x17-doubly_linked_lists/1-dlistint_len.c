#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Head of a linked list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	for (; h != NULL; nodes++)
		h = h->next;
	return (nodes);
}
