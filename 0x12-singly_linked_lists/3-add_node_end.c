#include "lists.h"

/**
 * add_node_end - add a new element to the end
 * @head: first node
 * @str: node data
 *
 * Return: always 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;

	new = (list_t *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{

	(*head) = new;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}
