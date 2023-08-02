#include "lists.h"

/**
 * free_listint2 - frees a list node and sets it to Null
 * @head: the node to be freed
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	if (*head)
	{
		free(*head);
		*head = NULL;
	}
}
