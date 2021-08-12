#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: int to add to the list
 *
 * Return: Null on fail, otherwise new element address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist;
	listint_t *templist;

	newlist = malloc(sizeof(listint_t));

	if (newlist == NULL)
		return (NULL);

	newlist->next = NULL;
	newlist->n = n;

	if (!head)
	{
		*head = newlist;
		return (newlist);
	}

	templist = *head;

	while (templist->next)
		templist = templist->next;

	templist->next = newlist;

	return (newlist);
}
