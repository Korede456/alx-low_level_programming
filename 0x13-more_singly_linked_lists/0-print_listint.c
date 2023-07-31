#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;

	while (h)
	{
		if (!h->n)
		{
			return ('\0');
		}
		else
		{
			printf("%d\n", h->n);
		}

		h = h->next;
		count++;
	}

	return (count);
}
