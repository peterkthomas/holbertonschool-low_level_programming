#include "lists.h"

/**
 * print_listint - prints all elements of a listint list
 * @h: pointer to a listint
 *
 * Return: number of nodes
 */
size_t print_list(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
