#include "lists.h"

/**
 * add_dnodeint - Adds new node to the beginning
 * @head: points to the head node
 * @n: node data
 *
 * Return: Address of the new element or NULL
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	new_node->next = *head;
	(*head) = new_node;

	return (new_node);
}
