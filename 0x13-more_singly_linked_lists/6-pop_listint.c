#include "lists.h"

/**
 * pop_listint - function that deletes the head
 * node of a listint_t linked list
 * and returns the head node’s data (n).
 *
 * @head: linked list
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *tempNode;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	tempNode = *head;
	data = tempNode->n;
	*head = (*head)->next;

	free(tempNode);

	return (data);
}
