#include "lists.h"

/**
 * sum_dlistint - sums up a doubly linkedlist
 * @head: pointer to the head node
 *
 * Return: sum of the linkedlist
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
