#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t
 * linked list.
 * @head: Pointer to the head of a linked list
 * @index: index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h = NULL;

	if (head == NULL || *head == NULL)
		return (-1);
	h = *head;

	if (index == 0)
		*head = (*head)->next;
	while (index > 0 && h != NULL)
	{
		h = h->next;
		index--;
	}

	if (h == NULL)
		return (-1);

	if (h->prev)
		h->prev->next = h->next;
	if (h->next)
		h->next->prev = h->prev;
	free(h);
	h = NULL;

	return (1);
}
