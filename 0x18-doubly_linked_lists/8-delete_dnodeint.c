#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at specified index
 * @head: pointer to head node
 * @index: index of node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp_node = *head;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);

	if (index == 0)
	{
		*head = temp_node->next;
		if (temp_node->next)
			temp_node->next->prev = NULL;
		free(temp_node);
		return (1);
	}

	while (i < index)
	{
		if (!temp_node->next)
			return (-1);
		temp_node = temp_node->next;
		i++;
	}

	temp_node->prev->next = temp_node->next;
	if (temp_node->next)
		temp_node->next->prev = temp_node->prev;

	free(temp_node);

	return (1);
}
