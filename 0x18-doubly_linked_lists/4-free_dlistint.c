#include "lists.h"

/**
 *  free_dlistint - frees a dlistint_t
 * @head: pointer to node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_node = NULL;


	while (head)
	{
		temp_node = head;
		head = (head)->next;
		free(temp_node);
	}
}
