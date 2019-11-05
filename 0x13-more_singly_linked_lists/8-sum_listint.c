#include "lists.h"

/**
 * sum_listint - Adds  all the data (n) of a listint_t linked list.
 * @head: First element of the list
 *
 * Return: the sum of all elements of the list, or 0 if is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
