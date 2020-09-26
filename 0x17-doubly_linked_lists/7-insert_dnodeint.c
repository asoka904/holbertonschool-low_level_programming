#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of a linked list
 * @idx: index to insert the new node
 * @n: integer for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = NULL, *new = NULL, *prev = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	current = *h;

	while (idx > 0)
	{
		prev = current;
		current = current->next;
		idx--;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = current;
	new->prev = prev;
	prev->next = new;
	if (current)
		current->prev = new;

	return (new);
}
