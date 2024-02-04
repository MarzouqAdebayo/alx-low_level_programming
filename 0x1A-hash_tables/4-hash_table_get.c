#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key you are looking for
 *
 * Return: the value for the key or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *ll_head;

	if (ht && ht->array)
	{
		idx = key_index((const unsigned char *)key, ht->size);
		ll_head = ht->array[idx];
		while (ll_head)
		{
			if (strcmp(ll_head->key, key) == 0)
				return (ll_head->value);
			ll_head = ll_head->next;
		}
	}

	return (NULL);
}
