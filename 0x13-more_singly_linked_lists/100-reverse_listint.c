#include "lists.h"

/**
 * reverse_listint - Reverses a linkedlist
 * @head: pointer to the head node
 *
 * Return: pointer to the head node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *temp;

	if (head == NULL || *head == NULL)
		return (NULL);
	while ((*head)->next)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = temp;
	}
	(*head)->next = prev;
	*head = (*head);
	return ((*head));
}
