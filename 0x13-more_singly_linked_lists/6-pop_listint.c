#include "list.h"

/**
 * pop_listint - deletes the head node
 * @head: points to the head node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;
	listint_t *nextNode;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	else
	{
		current = *head;
		n = current->n;
		nextNode = current->next;
		free(current);
		current = nextNode;
		*head = current;
	}
	return (n);
}
