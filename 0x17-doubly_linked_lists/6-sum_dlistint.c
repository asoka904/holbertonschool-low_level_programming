#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t linked
 * list.
 * @head: Pointer to the head of a linked list
 *
 * Return: the the sum of every element of the list, or 0 if is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	for (sum = 0; head != NULL; head = head->next)
		sum += head->n;
	return (sum);
}
