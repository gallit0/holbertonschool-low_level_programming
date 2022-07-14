#include "lists.h"

/**
 * pop_listint - delet head and return node
 * @head: head of list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *p;

	if (!(*head))
		return (n);
	if (*head != NULL)
	{
		p = (*head);
		n = (*head)->n;
		(*head) = (*head)->next;
		free(p);
	}
	else
	{
		free(*head);
		free(head);
	}
	return (n);
}
