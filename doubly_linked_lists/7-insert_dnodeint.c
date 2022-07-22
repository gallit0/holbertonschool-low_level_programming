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

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (p)
	{
		if (i == idx - 1)
		{
			if (!p->next)
				return (add_dnodeint_end(h, n));
			new = malloc(sizeof(dlistint_t));
			if (!new)
				return (0);
			new->n = n;
			new->next = p->next;
			new->prev = p;
			p->next = new;
			p = new->next;
			p->prev = new;
			return (new);
		}
		p = p->next;
		i++;
	}
	return (0);
}
