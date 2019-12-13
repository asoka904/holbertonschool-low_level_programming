#include "lists.h"

/**
 * free_dlistint - Free a dlistint_t list.
 * @head: Pointer to the head of a linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux = NULL;

	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
	}
}
