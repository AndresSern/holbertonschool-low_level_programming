#include "hash_tables.h"
/**
 * hash_table_create = Write a function that creates a hash table.
 *
 * @size: is the size of the array
 *
 * Return: A pointer to the newly created hash table
 *         If something went wrong, your function should return NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_Hash_Table = NULL;

	if (size > 0)
	{
		new_Hash_Table = malloc(sizeof(hash_table_t));
		if (new_Hash_Table == NULL)
		{
			return (NULL);
		}
		new_Hash_Table->array = calloc(size, sizeof(hash_node_t *));
		if (new_Hash_Table->array == NULL)
		{
			free(new_Hash_Table);
			return (NULL);
		}
		new_Hash_Table->size = size;
		return (new_Hash_Table);
	}
	return (NULL);
}
