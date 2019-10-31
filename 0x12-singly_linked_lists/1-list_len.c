#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: First element of a list_t
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	else
		return (list_len(h->next) + 1);
}
