#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of list
 * @head: head of list
 * @index: index of node
 * Return: head of list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	int i = index;
	int counter = 0;

	for (; p && counter != i; p = p->next)
	{
		counter++;
	}
	return (p);
}
