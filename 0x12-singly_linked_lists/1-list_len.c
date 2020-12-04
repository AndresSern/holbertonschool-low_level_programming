#include "lists.h"
/**
 * list_len - This function return to the number of nodes
 * @h: This is my sigle list
 * Return: This return to the number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
