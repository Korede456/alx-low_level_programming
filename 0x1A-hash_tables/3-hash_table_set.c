#include "hash_tables.h"

/**
 * hash_table_set - updates an element in a hash table
 * @ht: pointer to the ht
 * @key: key to be added to the hash table
 * @value: value to be associated with the key
 * Return: 0 or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	char *value_copy;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
	{
		free(value_copy);
		return (0);
	}
	item->key = strdup(key);
	if (item->key == NULL)
	{
		free(item);
		return (0);
	}
	item->value = value_copy;
	item->next = ht->array[index];
	ht->array[index] = item;

	return (1);
}
