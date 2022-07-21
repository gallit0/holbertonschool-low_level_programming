#include "lists.h"

/**
 * add_dnodeint_end - add node at the end
 * @head: head of the list
 * @n: int
 * Return: list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p = (*head);
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	for (; p->next != NULL;)
	{
		p = p->next;
	}
	new->prev = p;
	new->n = n;
	new->next = NULL;
	p->next = new;

	return (new);
}
