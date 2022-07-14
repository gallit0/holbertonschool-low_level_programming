#include "lists.h"

/**
 * free_list - free a list_t
 * @head: head of the list_t
 */

void free_list(list_t *head)
{
	list_t *p = head;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p->str);
		free(p);
	}
}
