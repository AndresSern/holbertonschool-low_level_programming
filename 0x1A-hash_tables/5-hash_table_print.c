#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_element = 0;
	hash_node_t *ptr;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			ptr = ht->array[i];
			while (ptr)
			{
				if (first_element == 0)
				{
					printf("'%s': '%s'", ptr->key, ptr->value);
					first_element += 1;
				}
				else
					printf(", '%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
			}
		}
	}
	printf("}\n");
}
