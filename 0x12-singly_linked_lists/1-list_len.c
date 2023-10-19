#include "lists.h"

/**
 * list_len - list length
 * #h: first node
 *
 * Return: always 0
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
