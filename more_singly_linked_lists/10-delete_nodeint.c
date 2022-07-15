#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index
 * @head: node of index
 * @index: index :p
 * Return: 1 on success -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = (*head);
	listint_t *temp;
	unsigned int i;

	if (!head || !(*head))
		return (-1);
	for (i = 0; p != NULL && i <= index; i++)
	{
		if (i == index - 1)
		{
			temp = p;
			p = p->next;
			temp->next = p->next;
			free(p);
			return (1);
		}
		p = p->next;
	}
	return (-1);
}
