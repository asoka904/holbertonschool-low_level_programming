#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer that contain the address of the first element of the list.
 *
 * Return: Number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *aux;
	listint_t *head;
	unsigned int i = 0;
	int dif;

	if (h == NULL)
		return (0);
	head = *h;
	while (head != NULL)
	{
		aux = head->next;
		free(head);

		dif = head - aux;
		if (dif < 1)
		{
			i++;
			break;
		}

		head = aux;
		i++;
	}
	*h = NULL;
	return (i);
}
