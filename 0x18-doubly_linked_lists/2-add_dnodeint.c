#include "lists.h"

/**
 * add_dnodeint - adds a new node to the beginning of a linked list
 * @head: beginning of list
 * @n: value to place in  new node
 *
 * Return: pointer to node or null
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	if (!head)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	node->next = *head;
	*head = node;

	if (node->next)
		(node->next)->prev = node;

	return (node);
}
