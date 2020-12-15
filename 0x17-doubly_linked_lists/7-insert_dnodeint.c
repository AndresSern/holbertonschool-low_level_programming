  
#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a new node at a given position
  * @h: list coming
  * @idx: index of the list whete the new node should be added
  * @n: integer to add to the structure
  * Return: the address of the new node or NULL if it failed
**/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *current_node = *h;

	if ((!new_node) || (*h == NULL && idx > 0))
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (current_node != NULL)
			current_node->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	for (; i < idx - 1; i++)
	{
		current_node = current_node->next;
		if (current_node == NULL && idx - i > 0)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->prev = current_node;
	new_node->next = current_node->next;
	current_node->next = new_node;
	current_node = current_node->next;
	current_node = current_node->next;
	current_node->prev = new_node;
	if (current_node != NULL)
	{
		current_node->prev = new_node;
	}
	return (new_node);
}
