#include "lists.h"

/**
 * sum_dlistint - Write a function that returns the sum of all the data (n)
 * of a dlistint_t linked list.)
 *
 * @head: This is the input double linked list
 *
 * Return: Return of the total of the sum each position if if the list is
 * empty, return 0
 *
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
