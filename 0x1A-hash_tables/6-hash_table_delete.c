#include "hash_tables.h"
/**
 * hash_table_delete - prints a hash table
 * @ht: hash table
 * Return: void
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				temp = ht->array[i];

				free(temp->key);
				free(temp->value);
				free(temp);
				ht->array[i] = ht->array[i]->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
