#include <stdlib.h>
#include "search_algos.h"

/**
 * free_list - Deallocates a singly linked list
 *
 * @list: Pointer to the linked list to be freed
 */
void free_list(listint_t *list)
{

	if (list)
	{
		listint_t *node;

		node = list->next;
		free(list);
		free_list(node);
	}
}
