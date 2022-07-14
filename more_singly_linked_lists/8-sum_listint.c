#include "lists.h"

/**
 * sum_listint - sum all the data
 * @head: head of list
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int result = 0;
	listint_t *p = head;

	for (; p; p = p->next)
	{
		result += p->n;
	}
	return (result);
}
