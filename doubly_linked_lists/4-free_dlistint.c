#include "lists.h"

/**
 * free_dlistint - drees a linked list
 * @head: head of list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
