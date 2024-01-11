#include "lists.h"

/**
 * get_dnodeint_at_index - get the node at index
 * @head: pointer to the pointer to the head of the DLL
 * @index: index of the node to return
 *
 * Return: the node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;

	while (head)
	{
		if (idx == index)
		{
			return (head);
		}
		idx++;
		head = head->next;
	}
	return (NULL);
}
