#include "lists.h"

/**
 * add_node - add a new node
 * @head: head of the linked list
 * @str: string
 * Return: pointer list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	if (!p)
		return (0);
	p->str = strdup(str);
	p->len = strlen(str);
	p->next = (*head);
	(*head) = p;

	return (*head);
}
