#include "lists.h"

/**
 * list_len - counts all elements in a list_t list
 * @h: pointer to first linked list
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		h = h->next;
		elements++;
	}

	return (elements);
}
