#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: points to the first node
 * Return: always 0
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	while (head != NULL)
	{
		printf("[%p] %u\n", (void *)head, head->n);
		n++;
		if (head < head->next)
		{
			printf("-> [%p] %u\n" (void *)head, head->next->n);
			break;
		}
		head = head->next;
	}
	return (n);
}
