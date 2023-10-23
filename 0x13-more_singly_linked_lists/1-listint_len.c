#include "lists.h"

/**
 * listint_len - returns the number of
 * elements of a linked list
 *
 * @h: pointer to first node
 *
 * Return: list lenght
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
