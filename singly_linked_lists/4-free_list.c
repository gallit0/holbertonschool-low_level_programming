#include "lists.h"

/**
 * free_list - free a list_t
 * @head: head of the list_t
 */

void free_list(list_t *head)
{
	list_t *p = head;
	list_t *aux;
	while (p != NULL)
	{
		aux = p;
		p = p->next;
		free(aux);
	}
	head = NULL;
}
