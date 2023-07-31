#include "lists.h"

/**
 * listint_len - counts the elements in a linked list
 * @h: list struct
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
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
			count++;
		}

		h = h->next;
	}
	return (count);
}
