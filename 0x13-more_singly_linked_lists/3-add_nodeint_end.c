#include "lists.h"

/**
 * add_nodeint_end - adds an element ot linkedlist
 * @head: pointer to the linked list
 * @n: data to be added to node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h = *head;

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if ((*head) == NULL)
		(*head) = new;
	else
	{
		while ((*head)->next)
			(*head) = (*head)->next;
		(*head)->next = new;
		*head = h;
	}

	return (new);
}
