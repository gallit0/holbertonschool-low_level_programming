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

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1 ; idx--)
	{
		p = p->next;
		if (!p)
		return (0);
	}

	if (!p->next)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);

	new->n = n;
	new->prev = p;
	new->next = p->next;
	p->next->prev = new;
	p->next = new;
	return (0);
}
