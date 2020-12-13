#include "lists.h"

/**
 * free_dlistint - Function that frees a double list linked.
 * @head: This is the double linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
