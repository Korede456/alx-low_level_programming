#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * at index of a linked list
 *
 * @head: list
 * @index: delete index
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (*head != NULL)
	{
		if (i == index)
		{
			free(*head);
		}
		i++;
		*head = (*head)->next;
	}

	return (1);
}
