#include "lists.h"

/**
 * add_nodeint - adds a new node to the list
 * @head: list struct
 * @n: element of the list
 *
 * Return: the address of new element
 */

listint *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	free(new);

	return (head);
}
