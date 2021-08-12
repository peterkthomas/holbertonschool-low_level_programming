#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @str: string to add to the list
 *
 * Return: Null on fail, otherwise new element address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;

	newlist = malloc(sizeof(listint_t));

	if (newlist == NULL)
		return (NULL);

	newlist->next = *head;
	newlist->n = n;

	*head = newlist;

	return (newlist);
}
