#include "lists.h"

/**
 * add_nodeint_end - add a new node to the end
 * @head: pointer to firstNode
 * @n: new element
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *current;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		(*head) = newNode;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
