#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int comma_flag = 0;
	hash_node_t *current;

	if (ht && ht->array)
	{
		putchar('{');
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				if (comma_flag)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				comma_flag = 1;
				current = current->next;
			}
		}
		putchar('}');
		putchar('\n');
	}
}
