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
	unsigned int i = 0;

	temp = malloc(sizeof(listint_t));
	if (!temp || !head)
		return (0);
	temp->n = n;

	if (idx == 0)
	{
		temp->next = p;
		(*head) = temp;
		return (temp);
	}
	while (i < idx - 1)
	{
		if (p == NULL || p->next == NULL)
		{
			return (0);
		}
		p = p->next;
		i++;
	}
	temp->next = p->next;
	p->next = temp;
	return (temp);
}
