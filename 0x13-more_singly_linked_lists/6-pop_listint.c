#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer that contain the address of the first element of the list.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *aux;
	int ret;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	aux = *head;
	*head = (*head)->next;
	ret = aux->n;
	free(aux);

	return (ret);
}
