#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list.
 * @head: Pointer that contain the address of the first element of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;
	listint_t *h;

	h = *head;
	while (h != NULL)
	{
		aux = h->next;
		free(h);
		h = aux;
	}
	*head = NULL;
}
