#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of a linked list
 * @n: integer for the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *prev = NULL;

	if (head == NULL)
		return (NULL);
	new = *head;
	while (new != NULL)
	{
		prev = new;
		new = new->next;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
		*head = new;

	if (prev != NULL)
		prev->next = new;
	new->n = n;
	new->next = NULL;
	new->prev = prev;
	return (new);
}
