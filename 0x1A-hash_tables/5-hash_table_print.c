#include "hash_tables.h"

/**
 * hash_table_print - Function to print the key: value from hash table
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a = 0;
	hash_node_t *bucket;
	int first_print = 0;

	if (!ht)
		return;

	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		bucket = ht->array[a];
		while (bucket)
		{
			if (first_print)
				printf(", ");
			printf("'%s': '%s'", bucket->key, bucket->value);
			first_print = 1;
			bucket = bucket->next;
		}
	}
	printf("}\n");
}
