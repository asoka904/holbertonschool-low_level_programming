#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: First element of a list_t
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);

	if (h->next == NULL)
		return (1);
	else
		return (print_list(h->next) + 1);
}
