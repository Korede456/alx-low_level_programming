#include "lists.h"

/**
 * get_nodeint_at_index - return nth node
 * @head: points to the head node
 * @index: node index
 * Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i <= index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		i++;
	}
	return (head);
}
