#include "lists.h"

/**
 *  add_dnodeint_end - adds new node to start of a dlistint_t list.
 * @head: start of list
 * @n: data to add
 * Return: number of elements in dlistint_t linked list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp_node = *head;

	new_node = malloc(sizeof(dlistint_t));

	if (!new_node)
		return (NULL);
	new_node->n = n;

	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;

	new_node->next = NULL;
	new_node->prev = temp_node;

	return (new_node);
}
