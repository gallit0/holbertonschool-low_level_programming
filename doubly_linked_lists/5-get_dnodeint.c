#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at index
 * @head: head of list
 * @index: index of the list
 * Return: list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;
	int i = index;
	int counter = 0;

	for (; p && counter != i; p = p->next)
		counter++;
	return (p);
}
