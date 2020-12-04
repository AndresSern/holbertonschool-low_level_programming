#include "lists.h"
/**
 * free_listint - Free nodes and list
 * @head: This is my struct
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		tmp = head;
		free(tmp);
		head = head->next;
	}
}
