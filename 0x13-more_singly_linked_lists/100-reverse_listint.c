#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Pointer that contain the address of the first element of the list.
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *h;
	listint_t *aux;

	if (head == NULL || *head == NULL)
		return (NULL);
	h = *head;
	*head = NULL;

	while (h != NULL)
	{
		aux = h->next;
		h->next = *head;
		*head = h;
		h = aux;
	}
	return (*head);
}
