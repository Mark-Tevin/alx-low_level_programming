#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash Table
 * @size: size of the hash table
 *
 * Return: Pointer
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
