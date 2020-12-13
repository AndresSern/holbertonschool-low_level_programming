#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements in a
 * double list linked
 *
 * @h: This is the input struct
 *
 * Return: Number of the element of the struct
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
