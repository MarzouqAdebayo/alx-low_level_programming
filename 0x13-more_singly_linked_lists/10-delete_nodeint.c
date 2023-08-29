#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer to the head node
 * @index: index of node to be deleted
 *
 * Return: 1 if it is successful, -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev, *next;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (current)
	{
		if (i == index - 1)
		{
			prev = current;
			current = current->next;
			next = current->next;
			free(current);
			prev->next = next;
			return (1);
		}
		current = current->next;
		i++;
	}
	return (-1);
}
