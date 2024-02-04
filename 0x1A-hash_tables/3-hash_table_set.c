#include "hash_tables.h"

/**
 * alloc - allocates new node
 * @key: key
 * @value: value
 *
 * Return: new node or NULL
 */
hash_node_t *alloc(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (NULL);
	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}
	new->next = NULL;

	return (new);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new, *current;
	char *temp;

	if (!ht || !key || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx])
	{
		current = ht->array[idx];
		while (current)
		{
			if (strcmp(current->key, key) == 0)
			{
				temp = strdup(value);
				if (!temp)
					return (0);
				free(current->value);
				current->value = temp;
				return (1);
			}
			else
				current = current->next;
		}
		new = alloc(key, value);
		if (!new)
			return (0);
		current = ht->array[idx];
		new->next = current;
		ht->array[idx] = new;
	}
	else
	{
		new = alloc(key, value);
		if (!new)
			return (0);
		ht->array[idx] = new;
	}
	return (1);
}
