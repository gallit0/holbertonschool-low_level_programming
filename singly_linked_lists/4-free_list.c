#include "lists.h"

/**
 * free_list - free a list_t
 * @head: head of the list_t
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
