#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the first element of the list.
 * @str: String to be contained by the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	if (*head != NULL)
		if ((*head)->next != NULL)
			return (add_node_end(&((*head)->next), str));

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
		(*head)->next = new;

	return (new);
}

