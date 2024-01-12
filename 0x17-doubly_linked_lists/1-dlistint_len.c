#include "lists.h"

/**
 * dlistint_len - calculate the length of a list
 * @h: points to the head node
 *
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	dlistint_t *current;

	count = 0;
	current = malloc(sizeof(dlistint_t));
	current->n = h->n;
	current->next = h->next;
	current->prev = h->prev;

	while (current)
	{
		count += 1;
		current = current->next;
	}
	return (count);
}
