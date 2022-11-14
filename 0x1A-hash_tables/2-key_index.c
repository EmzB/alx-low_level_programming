#include "hash_tables.h"

/**
 * key_index - Get index of a key/value pair
 * @key: The key to get Index
 * @size: array size of the hash table.
 *
 * returns: Index of the key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
