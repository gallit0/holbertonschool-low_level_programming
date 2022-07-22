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

	temp = malloc(sizeof(dlistint_t));
	if (!temp || !h)
		return (0);
	temp->n = n;

	for (; p != NULL && 1 <= idx; i++)
	{
		if (i == idx - 1)
		{
			temp->next = p->next;
			temp->prev = p->prev;
			p->next = temp;
			return (temp);
		}
		p = p->next;
	}
	return (0);
}
