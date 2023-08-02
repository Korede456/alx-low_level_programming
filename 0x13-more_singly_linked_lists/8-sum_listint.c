#include "lists.h"

/**
 * sum_listint - it sums all the data of a linked list
 * @head: linked list
 *
 * Return: 0 or sum of data
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
