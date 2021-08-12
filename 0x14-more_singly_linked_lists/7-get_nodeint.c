#include "lists.h"

/**
 * get_nodeint_at_index - find nth node in list
 * @head: pointer to head
 * @index: node to locate
 *
 * Return: nth node, or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!*head)
		return (0);

	while (list)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (head);
}
