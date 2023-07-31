#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: list struct
 * @n: new element
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));

	if (new)
	{
		return (NULL);
	}

	new->next = NULL;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;

		return (new);
	}
	else
	{
		last = *head;

		while (last->next)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (new);
}
