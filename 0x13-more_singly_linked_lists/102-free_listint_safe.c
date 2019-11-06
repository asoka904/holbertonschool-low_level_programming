#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer that contain the address of the first element of the list.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *aux;
	listint_t *head;
	unsigned int i = 0;

	if (h == NULL)
		return (0);
	head = *h;
	while (head != NULL)
	{
		aux = head->next;
		free(head);
		head = aux;
		i++;
	}
	*h = NULL;
	return (i);
}
