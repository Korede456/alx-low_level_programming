#include "lists.h"

/**
 * sum_dlistint - sum all data in a list
 * @head: points to the head node
 *
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *current;

	sum = 0;
	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
