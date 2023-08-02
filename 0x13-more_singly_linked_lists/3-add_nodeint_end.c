#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: list struct
 * @n: new element
 *
 * Return: address of new element or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *tempNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (tempNode->next)
		{
			tempNode = tempNode->next;
		}
		tempNode->next = newNode;
	}

	return (newNode);
}
