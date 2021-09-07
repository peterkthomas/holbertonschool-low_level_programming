#include "lists.h"

/**
 * dlistint_len - Lists number of dlistint_t nodes
 * @nodes: number of nodes
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
