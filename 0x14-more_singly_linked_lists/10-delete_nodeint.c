#include "lists.h"

/**
 * delete_nodeint_at_index - del a node at the specified index
 * @head: pointer to head
 * @index: index where to place new node
 *
 * Return: 1 success, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int local_index = 1;
	listint_t *list;
	listint_t *templist;

	if (!head)
		return (-1);

	list = *head;

	if (!list)
		return (-1);

	if (!index)
	{
		*head = list->next;
		free(list);
		return (1);
	}


	while (local_index < index)
	{
		list = list->next;
		local_index++;
	}

	if (!list || !list->next)
		return (-1);

	templist = list->next;
	list->next = templist->next;

	free(templist);


	return (1);
}
