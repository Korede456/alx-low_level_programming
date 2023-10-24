#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new
 * node at a given position
 *
 * @head: points to head node
 * @idx: position
 * @n: new node data
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *current;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	current = *head;
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	while (idx > 1)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
		idx--;
	}
	if (current == NULL)
	{
		return (NULL);
	}
	newNode->next = current->next;
	current->next = newNode;

	return (newNode);
}
