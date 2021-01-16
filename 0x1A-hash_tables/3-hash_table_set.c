#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	int returnAdd = 0;
	if (key == NULL || ht == NULL)
		return 0;
	index = key_index((unsigned char*)key, ht->size);
	returnAdd = add_node(&(ht)->array[index], (char *) key,(char *) value);
	if (returnAdd == 1)
		return 1;
	return 0;
}

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: Pointer to head of the linked list
 * @str: String to assigned to the node
 *
 * Return: the address of the new element, or NULL if it failed
 */

int add_node(hash_node_t **head, char *key, char *value)
{
	hash_node_t *new_node = (hash_node_t *) malloc (sizeof(hash_node_t));
	hash_node_t *aux = (*head);

	if (new_node == NULL)
		return (0);

	while(aux != NULL)
	{
		if(strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			free(new_node);
			return (1);
		}
		aux = aux->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = (*head);
	(*head) = new_node;
	return (1);
}
