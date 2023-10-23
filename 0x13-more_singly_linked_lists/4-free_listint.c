#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: points to the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *nextNode;

	current = head;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
}
