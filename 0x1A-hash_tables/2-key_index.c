#include "hash_tables.h"

/**
 * key_index - Write a function that gives you the index of a key.
 *
 * @key: key is the key
 * @size:  is the size of the array of the hash table
 *
 * Return: Returns the index at which the key/value pair shoud
 *         be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int preHash = hash_djb2(key);

	return (preHash % size);
}
