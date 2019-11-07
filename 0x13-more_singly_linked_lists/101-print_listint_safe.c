#include "lists.h"

/**
 * print_listint_safe - Prints all the elements of a listint_t list.
 * @head: First element of a listint_t
 *
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int count = 0;
	int dif;

	for (; head != NULL; count++)
	{
		printf("[%p] %i\n", (void *)head, head->n);

		dif = head - head->next;
		head = head->next;
		if (dif < 1)
		{
			printf("-> [%p] %i\n", (void *)head, head->n);
			break;
		}
	}

	return (count);
}
