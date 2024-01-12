#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts node at index
 * @h: pointer to head node
 * @idx: index
 * @n: value of the node
 *
 * Return: the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i;

	if (!h)
		return (NULL);
	else if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	current = *h;
	for (i = 0; current->next; i++)
	{
		if (i == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;
			(current->prev)->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		current = current->next;
	}
	free(new_node);
	if (i == idx)
		add_dnodeint_end(h, n);
	return (NULL);
}
