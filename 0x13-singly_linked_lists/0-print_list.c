#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to a list_t
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *tmp_list = h;

	while (tmp_list)
	{
		if (!tmp_list->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp_list->len, tmp_list->str);
		nodes++;
		tmp_list = tmp_list->next;
	}

	return (nodes);
}
