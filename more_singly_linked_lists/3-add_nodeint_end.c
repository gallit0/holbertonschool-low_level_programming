#include "lists.h"

/**
 * add_nodeint_end - add node at end
 * @head: head of list
 * @n: int
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *p = (*head);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (0);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (*head);
	}
	while (p != NULL && p->next != NULL)
		p = p->next;
	p->next = temp;
	return (*head);
}
