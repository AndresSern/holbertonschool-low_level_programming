#include "lists.h"

/**
 * len - Calculates the length of a string.
 * @str: Constant string
 * Return: The length of the string
 */

int len(const char *str)
{
	int count;

	if (str == NULL)
		return (0);
	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}

/**
 * add_node_end - Function that adds a new node at the end of a list_t list.
 *
 * @head: This is the input linked list
 * @str: This is the string take in my linked list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return NULL;
	}
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (*head);
}
