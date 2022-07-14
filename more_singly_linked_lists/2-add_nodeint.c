#include "lists.h"

/**
 * add_nodeint - add node at beggining
 * @head: head of list
 * @n: int
 * Return: list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (0);
	p->n = n;
	p->next = (*head);

	(*head) = p;

	return (*head);
}
