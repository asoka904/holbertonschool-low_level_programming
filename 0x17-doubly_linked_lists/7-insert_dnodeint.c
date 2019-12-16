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
	dlistint_t *prev = NULL, *next = NULL, *new = NULL;

	if (h == NULL)
		return (NULL);

	while (idx > 0)
	{
		head = head->next;
		if (head->next == NULL)
			return (NULL);
	}
	new = add_dnodeint();

	return (new);
}
