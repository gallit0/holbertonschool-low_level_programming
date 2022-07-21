#include "lists.h"

/**
 * sum_dlistint - return sum of data
 * @head: head of list
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *p = head;

	for (; p; p = p->next)
		result += p->n;
	return (result);
}
