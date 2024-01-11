#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the DLL
 * @head: pointer to the pointer to the head of the DLL
 * @n: the value of the new node
 *
 * Return: the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head, *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	if (!(*head))
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (current->next)
		current = current->next;
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
