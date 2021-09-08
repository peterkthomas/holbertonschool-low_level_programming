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
	dlistint_t *temp_delete = NULL;

	if (!*head || head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp_node);
		return (1);
	}

	while (temp_node && temp_node->next && index > 1)
	{
		temp_node = temp_node->next;
		index--;
	}

	if (!temp_node->next)
		return (-1);

	temp_delete = temp_node->next;

	if (temp_delete->next)
		temp_node->next = temp_delete->next;
	else
		temp_node->next = NULL;

	free(temp_delete);

	return (1);
}
