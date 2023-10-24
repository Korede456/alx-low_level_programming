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
	listint_t *temp;
	listint_t *previous;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	previous = NULL;

	while (index > 0)
	{
		if (current->next == NULL)
		{
			return (-1);
		}
		previous = current;
		current = current->next;
		index--;
		}
	previous->next = current->next;
	free(current);

	return (1);
}
