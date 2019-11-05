#include "lists.h"

/**
 * get_nodeint_at_index - Gets the nth node of a listint_t linked list.
 * @head: First element of the list
 * @index: Number of element to get the value
 *
 * Return: Address of the node, or NULL if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	for (; index > 0 && head != NULL; index--)
		head = head->next;
	return (head);
}
