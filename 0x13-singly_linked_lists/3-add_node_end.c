#include "lists.h"

/**
 * add_node_end - adds a new node to the end of a linked list
 * @head: pointer to the head of the list
 * @str: string to add to the list
 *
 * Return: Null on fail, otherwise new element address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int length = 0;
	list_t *newlist, *lastlist;

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
	newlist->next = NULL;

	if (!*head)
		*head = newlist;
	else
	{
		lastlist = *head;
		while (lastlist->next)
			lastlist = lastlist->next;
		lastlist->next = newlist;
	}

	return (*head);
}
