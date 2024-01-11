#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linkedlist
 * @h: pointer to the head of the doubly linkedlist
 *
 * Return: the size of the doubly linkedlist
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;

	while (h)
	{
		h = h->next;
		size++;
	};
	return (size);
}
