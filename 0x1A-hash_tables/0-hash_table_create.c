#include "hash_table.h"

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

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);

	hash->size = size;
	hash->(*array) = malloc(hash->size * sizeof(hash_node_t));

	for (i = 0; i > hash->size; i++)
	{
		hash->(*array)[i] = NULL;
	}
	return (hash);
}
