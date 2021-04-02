#include "hash_tables.h"
/**
 * hash_table_create - function to create a hash
 * table
 * @size: is the size of the array
 * Return: pointer to the newly creted hash table
**/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;

	if (size > 0)
	{
		new_hash_table = malloc(sizeof(hash_table_t));
		if (new_hash_table == NULL)
		{
			return (NULL);
		}

		new_hash_table->array = calloc(size, sizeof(hash_node_t *));
		if (new_hash_table->array == NULL)
		{
			free(new_hash_table);
			return (NULL);
		}
		new_hash_table->size = size;
		return (new_hash_table);
	}
	return (NULL);
}
