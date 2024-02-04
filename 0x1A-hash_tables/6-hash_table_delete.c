#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *holder;
	unsigned long int i;

	if (ht && ht->array)
	{
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				holder = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = holder;
			}
		}
		free(ht->array);
		free(ht);
	}
}
