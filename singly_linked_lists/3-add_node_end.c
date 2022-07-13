#include "lists.h"

/**
 * add_node_end - add a new node at the endo of list
 * @head: head of linked list
 * @str: string
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *p = (*head);
	temp = (list_t*)malloc(sizeof(list_t));
	if (!temp)
		return (0);

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	while (p->next != NULL)
	{
		p = p->next;
	}
	p->next = temp;
	return (*head);
}
