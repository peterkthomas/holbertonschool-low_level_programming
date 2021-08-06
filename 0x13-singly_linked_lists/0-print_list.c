#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to a list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;
	const list_t *tmp_list = h;

	while (tmp_list)
	{
		printf("[%u] %s\n", tmp_list->len, tmp_list->str);
		nodes++;
		tmp_list = tmp_list->next;
	}

	return (nodes);
}
