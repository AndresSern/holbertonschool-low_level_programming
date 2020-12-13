#include "lists.h"
/**
 * print_dlistint -Function that prints all the elements of a double list link
 *
 * @h: This is the input struct
 *
 * Return: Number of the element of the struct
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
