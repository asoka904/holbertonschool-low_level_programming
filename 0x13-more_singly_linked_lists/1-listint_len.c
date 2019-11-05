#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list.
 * @h: First element of a listint_t
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	for (; h != NULL; count++)
		h = h->next;

	return (count);
}
