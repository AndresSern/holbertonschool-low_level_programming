#include "lists.h"

/**
 * sum_listint - Sum  all head->n of this linked single list
 * @head: This is my linked list
 * Return: Return of the total of the sum
 */
int sum_listint(listint_t *head)
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
