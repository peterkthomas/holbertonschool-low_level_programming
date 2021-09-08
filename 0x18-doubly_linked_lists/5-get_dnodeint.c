#include "lists.h"

/**
 * get_dnodeint_at_index - print a node of a dlistint_t
 * @head: head node of linked list
 * @index: index
 * Return:  node at index.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (0);
	while (head)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (head);
}