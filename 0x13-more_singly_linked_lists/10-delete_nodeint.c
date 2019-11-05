#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 * linked list.
 * @head: Pointer that contain the address of the first element of the list.
 * @index: Number of element to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *h;
	listint_t *aux;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		h = *head;
		*head = (*head)->next;
		free(h);
		return (1);
	}
	for (h = *head; index > 1; index--)
	{
		if (h == NULL)
			return (-1);
		h = h->next;
	}
	if (h->next == NULL)
		return (-1);

	aux = h->next;
	h->next = h->next->next;
	free(aux);
	return (1);
}
