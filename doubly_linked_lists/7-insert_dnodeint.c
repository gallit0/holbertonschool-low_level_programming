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
	dlistint_t *temp;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (!p)
		return (0);
	while (p)
	{
		if (i == idx - 1)
		{
			if (p->next == NULL)
				return (add_dnodeint_end(h, n));

			temp = malloc(sizeof(dlistint_t));
			if (!temp)
				return (0);
			temp->n = n;
			temp->next = p->next;
			temp->prev = p;
			p->next = temp;
			p = temp->next;
			p->prev = temp;
			return (temp);
		}
		p = p->next;
		i++;
	}
	return (0);
}
