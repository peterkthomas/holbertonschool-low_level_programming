#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to head
 *
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int n;

	if (!*head)
		return (0);

	list = *head;
	*head = (*head)->next;
	n = list->n;

	free(list);

	return (n);
}
