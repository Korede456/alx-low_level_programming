#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: list
 * Return: a pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode, *currentNode, *nextNode;

	if (*head == NULL || (*head)->next == NULL)
	{
		return *head;
	}

	prevNode = NULL;
	currentNode = *head;

	while (current != NULL)
	{
		nextNode = currentNode->next;
		currentNode->next = prevNode;
		prevNode = currentNode;
		currentNode = nextNode;
	}

	*head = prev;

	return (*head);
}
