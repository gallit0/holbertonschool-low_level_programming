#include "lists.h"

/**
 * print_dlistint - print a doubly list
 * @h: head of list
 * Return: size_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *p;

	if (!h)
		return (0);
	p = h;
	for (; p; p = p->next)
	{
		printf("%d\n", p->n);
		counter++;
	}
	return (counter);
}
