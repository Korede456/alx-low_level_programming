#include "lists.h"

/**
 * add_node - add node at the beginning
 * @head: first node
 * @str: new node string
 *
 * Return: always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
