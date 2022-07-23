#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at given position
 * @h: head of list
 * @idx: position
 * @n: data
 * Return: list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h;
	dlistint_t *new;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	if (!(*h))
	{
		*h = new;
		new->next = new->prev = NULL;
		return (new);
	}
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	while (p->next && (i + 1 != idx))
	{
		p = p->next;
		i++;
	}
	if (!p->next && (idx > i + 1))
		return (0);
	if (!p->next)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	new->next = p->next;
	new->prev = p->next->prev;
	p->next->prev = new;
	p->next = new;

	return (new);
}
