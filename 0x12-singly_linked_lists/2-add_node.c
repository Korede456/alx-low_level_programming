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
	struct list_s *new;

	new = (struct list_s *)malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strcpy(new->str, str);
	new->len = strlen(str);
	new->next= (*head);
	(*head) = new;

	return (*head);
}
