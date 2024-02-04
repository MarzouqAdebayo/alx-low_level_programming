#include "hash_tables.h"

/**
 * shash_table_create - a function that creates a hash table
 * @size: the size of the array
 *
 * Return: the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_table_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * dlli - double linked list insert
 * @h: head node
 * @t: tail node
 * @new: new node
 */
void dlli(shash_node_t **h, shash_node_t **t, shash_node_t **new)
{
	shash_node_t *current, *prev = NULL;

	if (!h || !t || !new || !(*new))
		return;

	current = *h;

	while (current && strcmp((*new)->key, current->key) > 0)
	{
		prev = current;
		current = current->snext;
	}

	if (prev == NULL)
	{
		(*new)->snext = *h;
		(*new)->sprev = NULL;
		if (*h)
			(*h)->sprev = *new;
		*h = *new;
		if (*t == NULL)
			*t = *new;
	}
	else
	{
		(*new)->snext = prev->snext;
		(*new)->sprev = prev;
		prev->snext = *new;

		if ((*new)->snext == NULL)
			*t = *new;
		else
			(*new)->snext->sprev = *new;
	}
}

/**
 * salloc - allocates new node
 * @key: key
 * @value: value
 *
 * Return: new node or NULL
 */
shash_node_t *salloc(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(shash_node_t));
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
 * shash_table_set - adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 *
 * Return: 1 on success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *new, *current;
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
		new = salloc(key, value);
		if (!new)
			return (0);
		current = ht->array[idx];
		new->next = current;
		ht->array[idx] = new;
	}
	else
	{
		new = salloc(key, value);
		if (!new)
			return (0);
		ht->array[idx] = new;
	}

	dlli(&(ht->shead), &(ht->stail), &new);

	return (1);
}

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key you are looking for
 *
 * Return: the value for the key or NULL
 */
char *hash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *ll_head;

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

/**
 * shash_table_print - a function that prints a sorted linked list
 * @ht: the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	int comma_flag = 0;
	shash_node_t *current = ht->shead;

	putchar('{');
	while (current)
	{
		if (comma_flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		comma_flag = 1;
		current = current->snext;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_print - a function that prints a sorted linked list in
 * reverse
 * @ht: the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int comma_flag = 0;
	shash_node_t *current = ht->stail;

	putchar('{');
	while (current)
	{
		if (comma_flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		comma_flag = 1;
		current = current->sprev;
	}
	putchar('}');
	putchar('\n');
}

/**
 * shash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *holder;
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
