#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to the first node
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
