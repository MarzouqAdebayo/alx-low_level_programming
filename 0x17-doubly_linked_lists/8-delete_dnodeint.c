#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: pointer to the head node
 * @index: index at which node is to be removed
 *
 * Return: 1 if successful or -1 if not successful
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (!head)
		return (-1);
	if (index == 0)
	{
		(current->next)->prev = NULL;
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; current->next; i++)
	{
		if (i == index)
		{
			(current->prev)->next = current->next;
			(current->next)->prev = current->prev;
			free(current);
			return (1);
		}
		current = current->next;
	}
	if (i == index)
	{
		(current->prev)->next = NULL;
		free(current);
		return (1);
	}
	return (-1);
}
