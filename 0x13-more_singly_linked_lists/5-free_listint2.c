#include "lists.h"

/**
 * free_listint2 - free a linked list
 * @head: points to first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *nextNode;

	current = (*head);
	while (current->next != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
