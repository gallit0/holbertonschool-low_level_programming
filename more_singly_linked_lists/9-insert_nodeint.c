#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given position
 * @head: head of list
 * @idx: index
 * @n: int
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p = (*head);
	listint_t *temp;
	unsigned int i;

	if (!p || !head)
		return (0);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (0);
	temp->n = n;
	temp->next = NULL;

	for (i = 0; i <= idx; i++)
	{
		if (i == idx - 1)
		{
			p->next = temp->next;
			temp->next = p;
			return (p);
		}
		p = p->next;
	}
	return (0);
}
