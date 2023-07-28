#include "lists.h"

/**
 * list_len - counts number of elements
 * @h: list
 *
 * Return: return number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
		}
		h = h->next;
		count++;
	}
	return (count);
}
