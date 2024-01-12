#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node
 * @h: points to the head node
 * @idx: index of where the insertion should be
 * @n: new_node data
 *
 * Return: Address of new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *current;
	dlistint_t *new_node;
	dlistint_t *temp;

	current = *h;
	count = 0;
	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	while (current != NULL && count != idx)
	{
		current = current->next;
		count++;
	}

	temp = current->prev;
	current->prev = new_node;
	new_node->next = current;
	new_node->prev = temp;
	temp->next = new_node;

	return (new_node);
}
