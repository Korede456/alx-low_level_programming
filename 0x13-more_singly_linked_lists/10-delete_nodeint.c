#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: points to the head node
 * @index: index to be deleted
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *next;
	unsigned int i;

	i = 0;
	current = *head;
	while (i < index)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
		i++;
	}
	next = current->next;
	free(current);
	current = next;
	return (1);
}
