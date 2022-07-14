#include "lists.h"

/**
 * listint_len - return number of elements linked
 * @h: head of list
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *p = h;

	for (; p; p = p->next)
		counter++;
	return (counter);
}
