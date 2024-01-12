#include "lists.h"

/**
 * get_dnodeint_at_index - Gets the nth node of a list
 * @head: points to the first node
 * @index: index of node to be returned
 *
 * Return: Index node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	current = head;
	count = 0;

	while (current != NULL && count != index)
	{
		current = current->next;
		count ++;
	}
	return (current);
}
