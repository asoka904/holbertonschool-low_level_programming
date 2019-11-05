#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to the first element of the list
 * @idx: Index of the list where the new node should be added.
 * @n: Value for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
 listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	while (idx > 1)
	{
		if (h == NULL)
			return (NULL);
		if (h->next == NULL)
	}

	return (new);
}
