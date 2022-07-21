#include "lists.h"

/**
 * dlistint_len - lenght of doubly linked list
 * @h: head of list
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;
	const dlistint_t *p = h;

	for (; p; p = p->next)
		counter++;
	return (counter);
}
