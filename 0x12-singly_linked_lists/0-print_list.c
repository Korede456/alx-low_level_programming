#include "lists.h"

/**
 * print_list - prints the elements of a list
 * @h: points to the first node
 * Return: a struct
 */

size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		while (h != NULL)
		{
			printf("[%d] %s", h->len, h->str);
			n++;
			h = h->next;
		}
	}
	return (n);
}
