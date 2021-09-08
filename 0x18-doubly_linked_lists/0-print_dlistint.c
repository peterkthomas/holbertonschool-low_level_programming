#include "lists.h"

/**
 * print_dlistint - Prints all elements of a dlistint_t
 * @h: pointer to the list
 *
 * Return: size_t of the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (n);
}
