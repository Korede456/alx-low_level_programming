#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t
 * @head: list
 * @index: node index
 * Return: nth node7-get_nodeint.c or 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;

	if (!head)
	{
		return (0);
	}

	i = 1;

	while (head)
	{
		if (head == NULL)
		{
			return (0);
		}

		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
}
