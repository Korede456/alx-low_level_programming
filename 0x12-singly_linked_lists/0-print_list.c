#include "lists.h"

/**
 * print_list - it prints all the elements of a list
 * @h: list node
 * Return: it returns number of nodes
 *
 * Description: singly linked lists
 */

size_t print_list(const list_t *h)
{
	unsigned int num;

	num = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] %s\n", num, h->str);
		}

		num++;
	}

	return (num);
}
