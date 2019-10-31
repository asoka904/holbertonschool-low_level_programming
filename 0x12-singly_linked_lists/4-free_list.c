#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: Pointer to the first element of the list.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			free_list(head->next);
		}
		free(head->str);
		free(head);
	}
}
