#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of a linked list
 * @index: Position of the node to return
 *
 * Return: the address of the node, or NULL if this does not exist,
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index > 0)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		index--;
	}
	return (head);
}
