#include "hash_tables.h"

/**
 * hash_table_get - Write a function that retrieves a value
 *                  associated with a key.
 *
 * @ht: ht is the hash table you want to look into
 * @key: is the key you are looking for
 *
 * Return:  the value associated with the element, or NULL if key couldnt be
 * found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i = 0;
	hash_node_t *ptr = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (strcmp(ht->array[i]->key, key) == 0)
				return (ht->array[i]->value);
			ptr = ht->array[i];
			while (ptr->next)
			{
				if (strcmp(ptr->key, key) == 0)
					return (ptr->key);
				ptr = ptr->next;
			}
		}
	}
	return (NULL);
}
