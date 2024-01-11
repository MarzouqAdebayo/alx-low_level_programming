#include "lists.h"

/**
 * add_dnodeint - adds a new node to the DLL
 * @head: pointer to the pointer to the head of the DLL
 *
 * @return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	if (!(*head))
		*head = new_node;
	else
	{
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (new_node);
}
