#include "lists.h"

/**
 * free_listint - free a list
 * @head: head of list
 */

void free_listint(listint_t *head)
{
	lsitint_t *p = head;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
