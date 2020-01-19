#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *storage;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			while (ht->array[index])
			{
				storage = ht->array[index];
				ht->array[index] = (ht->array[index])->next;
				free(storage->key);
				free(storage->value);
				free(storage);
			}
		}
	}

	free(ht->array);
	free(ht);
}
