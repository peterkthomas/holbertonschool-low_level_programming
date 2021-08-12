#include "lists.h"

/**
 * insert_nodeint_at_index - add a note at the specified index
 * @head: pointer to head
 * @idx: index where to place new node
 * @n: data to add to list
 *
 * Return: Null if fail, or address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int local_index = 1;
	listint_t *list;
	listint_t *templist;

	if (!head)
		return (NULL);

	templist = *head;

	list = malloc(sizeof(listint_t));

	if (!list)
		return (NULL);

	list->n = n;
	list->next = NULL;

	if (!idx)
	{
		list->next = *head;
		*head = list;
		return (list);
	}


	while (local_index < idx)
	{
		templist = templist->next;
		local_index++;
	}

	list->next = templist->next;
	templist->next = list;

	return (list);
}
