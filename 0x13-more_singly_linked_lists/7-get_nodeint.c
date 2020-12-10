#include "lists.h"

/**
 * get_nodeint_at_index - Function return to nth of the node
 * @head: THis is my structure
 * @index: This is my index
 * Return: This is the return
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
