#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at index
 * @head: head of list
 * @index: position
 * Return: int
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = (*head);
	dlistint_t *temp, *p0;
	unsigned int i;

	if (!head || !(*head) || !(*head)->next)
		return (-1);
	if (index == 0)
	{
		(*head) = p->next;
		p0 = p->next;
		p0->prev = NULL;
		free(p);
		return (1);
	}
	for (i = 0; p != NULL && i <= index; i++)
	{
		if (i == index - 1)
		{
			temp = p;
			p = p->next;
			temp->next = p->next;
			p0 = p;
			p0 = p0->next;
			p0->prev = temp;
			free(p);
			return (1);
		}
		p = p->next;
	}
	return (-1);
}
