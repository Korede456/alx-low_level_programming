#include "lists.h"

size_t dlistint_len(const dlistint_t *h);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

/**
 * insert_dnodeint_atindex - insert a new node at index
 * @h: points to the head node
 * @idx: insertion index
 * @n: node data
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	dlistint_t *temp;
	size_t len;
	unsigned int count;

	count = 0;
	len = dlistint_len(*h) - 1;
	new_node = malloc(sizeof(dlistint_t));

	if (idx > len || new_node == NULL)
		return (NULL);

	new_node->n  = n;

	current = *h;
	if (current != NULL && count != idx)
	{
		current = current->next;
		count++;
	}

	temp = current->prev;
	new_node->next = current;
	current->prev = new_node;
	new_node->prev = temp;
	temp->next = new_node;
	return (new_node);
}

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
