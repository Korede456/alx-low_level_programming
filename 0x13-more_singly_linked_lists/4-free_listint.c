#include "lists.h"

/**
 * free_listint - it frees a linked list node
 * @head: node to be freed
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	free(head);
}
