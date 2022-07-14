#include "lists.h"

/**
 * print_listint - print list of ints
 * @h: head of list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *p = h;

	for (; p; p = p->next)
	{
		printf("%d\n", p->n);
		counter++;
	}
	return (counter);
}
