#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Head of a linked list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    int nodes = 0;

    for (; h != NULL; h = h->next, nodes++)
        printf("%i\n", h->n);
    return (nodes);
}
