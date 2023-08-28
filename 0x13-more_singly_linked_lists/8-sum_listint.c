#include "lists.h"

/**
 * sum_listint - sums the linkedlist node data
 * @head: pointer to the head node
 *
 * Return: the sum of the node data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
