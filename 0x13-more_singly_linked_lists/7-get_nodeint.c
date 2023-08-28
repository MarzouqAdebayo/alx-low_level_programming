#include "lists.h"

/**
 * get_nodeint_at_index - returns node at index n
 * @head: pointer ot the head node
 * @index: index
 *
 * Return: pointer ot the new node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	i = 0;
	while (i < index && current)
	{
		current = current->next;
		i++;
	}
	if (!current)
		return (NULL);
	return (current);
}
