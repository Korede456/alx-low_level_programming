#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a
 * new node at a given position
 *
 * @head: linked list
 * @idx: position to insert new node
 * @n: new node data
 *
 * Return: the address of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode;

	i = 0;

	while (*head != NULL)
	{
		if (i == idx)
		{
			newNode = malloc(sizeof(listint_t));
			newNode->n = n;
			newNode->next = *head;
			*head = newNode;
		}
		i++;
		*head = (*head)->next;
	}

	if (*head == NULL)
	{
		return (NULL);
	}

	return (newNode);
}
