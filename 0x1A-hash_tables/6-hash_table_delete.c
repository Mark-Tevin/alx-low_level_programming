#include "hash_tables.h"

/**
 * hash_table_delete - Frees a hash table and all nodes
 * @ht: pointer to hash Table
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *bucket, *aux_free;
	unsigned long int d = 0;

	if (!ht)
		return;

	for (d = 0; d < ht->size; d++)
	{
		bucket = ht->array[d];
		while (bucket)
		{
			aux_free = bucket;
			bucket = bucket->next;
			if (aux_free->key)
				free(aux_free->key);
			if (aux_free->value)
				free(aux_free->value);
			free(aux_free);
		}
	}
	free(ht->array);
	free(ht);
}
