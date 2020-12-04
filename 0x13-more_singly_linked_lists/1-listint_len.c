#include "lists.h"
/**
 * listint_len - This function return to the number of nudes
 * @h: This is my structure entry
 * Return: This return to the number the nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}


