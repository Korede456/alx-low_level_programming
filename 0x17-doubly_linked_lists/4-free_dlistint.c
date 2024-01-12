#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: points to the head node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
