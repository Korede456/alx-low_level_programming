#include "hash_tables.h"

/**
 * hash_table_create - points to a newly created
 * table
 *
 * @size: size of the hash arary
 *
 * Return: a pointer to the new table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	i = 0;
	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);

	hash->array = calloc(hash->size, sizeof(hash_node_t));
	if (hash->array == NULL)
		return (NULL);
	hash->size = size;

	while (i < size)
	{
		hash->array[i] = NULL;
		i++;
	}
	return (hash);
}
