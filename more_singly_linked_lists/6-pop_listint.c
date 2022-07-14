#include "lists.h"

/**
 * pop_listint - delet head and return node
 * @head: head of list
 * Return: int
 */

int pop_listint(listint_t **head)
{
	int n = 0;

	if (*head != NULL)
	{
		n = (*head)->n;
		(*head) = (*head)->next;
	}
	return (n);
}
