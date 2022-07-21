#include "lists.h"

/**
 * add_dnodeint - add new node at beggining
 * @head: head of the list
 * @n: int
 * Return: list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	p = malloc(sizeof(dlistint_t));
	if (!p)
		return (0);
	p->n = n;
	p->next = (*head);
	p->prev = NULL;
	(*head) = p;
	return (*head);
}
