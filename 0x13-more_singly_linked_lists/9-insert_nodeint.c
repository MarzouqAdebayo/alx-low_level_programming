#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node in at index idx
 * @head: pointer to the head node
 * @idx: index to insert node
 * @n: data to be stored in node
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current = *head;
	unsigned int i;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	if (idx == 0)
	{
		new->n = n;
		new->next = current;
		*head = new;
	}
	else
	{
		i = 0;
		while (current)
		{
			if (i == idx - 1)
			{
				new->n = n;
				new->next = current->next;
				current->next = new;
				return (new);
			}
			current = current->next;
			i++;
		}
	}

	return (NULL);
}
