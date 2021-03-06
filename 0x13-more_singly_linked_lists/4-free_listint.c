#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: Pointer to the first element of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *aux;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
