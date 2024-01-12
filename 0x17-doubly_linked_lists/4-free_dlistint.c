#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: points to the head node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
