#include "lists.h"

/**
 * add_node_end - add a new node at the endo of list
 * @head: head of linked list
 * @str: string
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	if (!p)
		return (0);

	p->str = strdup(str);
	p->len = strlen(str);
}
