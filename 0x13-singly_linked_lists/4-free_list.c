#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head of list
 */
void free_list(list_t *head)
{
	list_t *list, *next;

	list = head;

	while (list)
	{
		next = list->next;
		free(list->str);
		free(list);
		list = next;
	}
}
