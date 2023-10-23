#include "lists.h"

/**
 * add_nodeint - add a new node at beginning
 * @head: pointer to first node
 * @n: node element
 *  Return: address of new element or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *nextNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;

		while (*head == NULL)
		{
			nextNode = *head;
			*head = newNode;
			(*head)->next = nextNode;
		}
	}
	return (*head);
}
