#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *list;


	while (head && *head && (*head)->next)
	{
		list = (*head)->next;
		free(*head);
		*head = list;
	}

	free(*head);
	*head = NULL;
}
