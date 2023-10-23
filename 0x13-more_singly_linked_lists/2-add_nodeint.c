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

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
