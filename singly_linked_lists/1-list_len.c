#include "lists.h"

/**
 * list_len - return number of elements
 * @h: head
 * Return: amount of elements
 */

size_t list_len(const list_t *h)
{
	int counter = 0;
	const list_t *p = h;

	for (; p; p = p->next)
	{
		counter++;
	}
	return (counter);
}
