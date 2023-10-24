#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: points to the head node
 * Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *others;
	listint_t *reversed;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	others = (*head)->next;
	reversed = reverse_listint(&others);
	(*head)->next->next = *head;
	(*head)->next = NULL;

	*head = reversed;
	return (*head);
}
