#include "lists.h"
dlistint_t *check(dlistint_t **h, int idx, dlistint_t *new_node);

/**
  * insert_dnodeint_at_index - Function that inserts a new node at a
  * given position.
  *
  * @h: This the input double list linked
  * @idx: index of the list whete the new node should be added
  * @n: integer to add to the structure
  *
  * Return: The address of the new node, or NULL if it failed
  *         If it is not possible to add the new node at index idx, do not
  *         add the new node and return NULL
**/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	/*unsigned int count = 0;*/
	dlistint_t *new_node, *current_node = *h;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		if (current_node != NULL)
			current_node->prev = new_node;
		return (new_node);
	}
	new_node = check(h, idx, new_node);
	if (new_node == NULL)
		return (NULL);
	return (new_node);
}

/**
 * check - Function created to valide if it can be added a node to the double
 *         list linked, if not return null
 *
 * @h: THis is the input double list linked
 * @idx: Variable Index
 * @new_node: This is the add new node
 *
 * Return: The address of the double list link if not return NULL
 */

dlistint_t *check(dlistint_t **h, int idx, dlistint_t *new_node)
{
	int count = 0;
	dlistint_t *current_node = *h;

	for (; count < idx - 1; count++)
	{
		current_node = current_node->next;
		if (current_node == NULL && idx - count > 0)
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
	if (current_node != NULL)
		current_node->prev = new_node;
	return (new_node);
}
