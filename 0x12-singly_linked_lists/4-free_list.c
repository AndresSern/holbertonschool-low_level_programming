#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: This is the linked listi
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
