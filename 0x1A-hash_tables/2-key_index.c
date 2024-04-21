#include "hash_tables.h"

/**
 * key_index - gives index for given keys
 * @key: key (string) to hash
 * @size: size of our hash table
 *
 * Return: index of 'key' using the djb2 function
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
