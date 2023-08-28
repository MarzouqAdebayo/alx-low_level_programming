#include "lists.h"

/**
 * add_nodeint - adds a new node to the linked list
 * @head: pointer to the head
 * @n: data to put in the node
 *
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
