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
	listint_t *current, *prev;
	unsigned int i = 0;

	if (!head)
		return (-1);

	current = *head;
	prev = *head;
	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}
	else
	{
		while (current->next)
		{
			if (i == index)
			{
				prev->next = current->next;
				free(current);
				return (1);
			}
			prev = current;
			current = current->next;
			i++;
			if (!current)
				break;
		}
	}
	return (-1);
}
