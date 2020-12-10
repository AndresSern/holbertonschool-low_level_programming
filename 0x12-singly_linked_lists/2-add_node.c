#include "lists.h"

/**
 * len - Calculates the length of a string.
 *
 * @str: Constant string
 *
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
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len =  len(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
