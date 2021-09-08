#include "lists.h"

/**
 * dlistint_len - Lists number of dlistint_t nodes
 * @h: pointer to list start
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
