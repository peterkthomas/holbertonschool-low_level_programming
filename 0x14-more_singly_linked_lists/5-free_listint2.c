#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointerx2 to  head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if(!head)
		return;

	while (*head)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}

	*head = NULL;
}
