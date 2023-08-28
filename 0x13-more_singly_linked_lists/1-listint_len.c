#include "lists.h"

/**
 * listint_len - Prints the length of a linked list
 * @h: pointer to the head of the linked list
 *
 * Return: length of the linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
