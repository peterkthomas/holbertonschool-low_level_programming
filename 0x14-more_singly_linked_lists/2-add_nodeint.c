#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @str: string to add to the list
 *
 * Return: Null on fail, otherwise new element address
 */

listint_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int length = 0;
	listint_t *newlist;

	newlist = malloc(sizeof(list_t));

	if (newlist == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(newlist);
		return (NULL);
	}

	while (str[length])
		length++;

	newlist->str = duplicate;
	newlist->len = length;
	newlist->next = *head;

	*head = newlist;

	return (newlist);
}
