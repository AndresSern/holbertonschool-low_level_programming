#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the nth node of a
 * dlistint_t linked list.
 *
 * @head: THis is the input structure
 * @index: This is the input index
 *
 * Return: This is the return
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
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
