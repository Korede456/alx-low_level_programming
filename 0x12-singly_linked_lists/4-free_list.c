#include "lists.h"

/**
 * free_list - free the list memory
 * @head: first node
 * Return: always 0;
 */

void free_list(list_t *head)
{
	list_t *current;
	list_t *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}
