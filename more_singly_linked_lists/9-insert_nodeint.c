#include "lists.h"

/**
 * insert_nodeint_at_index - inser node at given position
 * @head: head of list
 * @idx: index
 * @n: int
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p0 = (*head);
	listint_t *p1;

	p1 = malloc(sizeof(listint_t));
	if (!p1)
		return (0);
	p1->n = n;
	p1->next = NULL;

	idx--;
	while (idx > 1)
	{
		p0 = p0->next;
		idx--;
	}

	p1->next = p0->next;
	p0->next = p1;

	return (p1);
}
