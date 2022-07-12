#include "lists.h"

/**
 * print_list - print all elements of a list
 * @h: header
 * Return: amount of elements
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *p = h;

	for (; p; p = p->next)
	{
		if (p->str)
			printf("[%u] %s", p->len, p->str);
		else
			printf("[0] (nil)");
		counter++;
		putchar(10);
	}
	return (counter);
}
