#include "lists.h"

/**
 * sum_dlistint - sums dlistint_t elements
 * @head: pointer to head node
 *
 * Return: sum of list elements (int)
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);

}
